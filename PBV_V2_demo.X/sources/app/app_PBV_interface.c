/*
    (c) 2022 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
 */
///< Includes
#include "config/config.h"
#include "app_PBV_interface.h"
#include "app_PBV_config.h"

/*********************************************************************************
 * @ingroup APP_PBV
 * @var     APP_PBV_FUNCS
 * @brief   extern const struct of function pointers
 * @details 
 *      this structure has the function pointers that links to the interfaces from CAN 
 * or UART. depending upon the selection in config.h
 **********************************************************************************/
extern const APP_PBV_INTF_API_t APP_PBV_FUNCS;

/*********************************************************************************
 * @ingroup APP_PBV
 * @var     App_System_To_PBV_Ptr
 * @brief   
 * @details 
 *      pointer to the PBV_Datatype_TX_t object that will be passed from the application. 
 * 
 **********************************************************************************/
static PBV_Datatype_TX_t * App_System_To_PBV_Ptr;


/*********************************************************************************
 * @ingroup APP_PBV
 * @var     App_PBV_To_System_Ptr
 * @brief   
 * @details 
 *      pointer to the PBV_Datatype_RX_t object that will be passed from the application. 
 * 
 **********************************************************************************/
static PBV_Datatype_RX_t * App_PBV_To_System_Ptr;

/*********************************************************************************
 * @ingroup App_PBV
 * @var     App_System_To_PBV_ASCII_Ptr
 * @brief   
 * @details 
 *      pointer to the PBV_Datatype_TX_t object that will be passed from the application. 
 **********************************************************************************/
static PBV_Datatype_TX_t * App_System_To_PBV_ASCII_Ptr;

/*********************************************************************************
 * @ingroup APP_PBV  
 * @fn      PBV_Change_from_Sixteen_to_Eight(uint16_t * sixteenPtr, uint8_t * eightPtr)
 * @param   sixteenPtr - ptr to sixteen bit data
 * @param   eightPtr - ptr to eigtht bit data
 * @param   length - length of sixteen bit
 * @return  void
 * @details 
 *  This function changes 16 bit data to 8 bit data
 **********************************************************************************/

void PBV_Change_from_Sixteen_to_Eight(uint16_t * sixteenPtr, uint8_t * eightPtr, uint16_t length)
{
    for (uint16_t i = 0, j = 0; i < (length * 2); i = i + 2, j++)
    {
        eightPtr[i] = (uint8_t) (sixteenPtr[j] >> 8);
        eightPtr[i + 1] = (uint8_t) (sixteenPtr[j] & 0x00FF);
    }
}

/*********************************************************************************
 * @ingroup APP_PBV
 * @fn      PBV_Change_from_Sixteen_to_Eight(uint16_t * sixteenPtr, uint8_t * eightPtr)
 * @param   sixteenPtr - ptr to sixteen bit data
 * @param   eightPtr - ptr to eigtht bit data
 * @param   length - length of eight bit 
 * @details 
 *  This function changes 8 bit data to sixteen bit data
 **********************************************************************************/

void PBV_Change_from_Eight_to_Sixteen(uint8_t * eightPtr, uint16_t * sixteenPtr, uint16_t length)
{
    uint8_t length_odd = (uint8_t) (length & 0x01);
    uint16_t length_t;
    
    uint16_t i, j;
    
    if (length_odd)
        length_t = (length & 0xFFFE);
    else
        length_t = length;
    
    for (i = 0, j = 0; i < length_t; i = i + 2, j++)
    {
        sixteenPtr[j] = ((uint16_t) (eightPtr[i] << 8)) + eightPtr[i + 1];
    }    
    if (length_odd)
        sixteenPtr[++j] = ((uint16_t) (eightPtr[length-1] << 8));

}

/*********************************************************************************
 * @ingroup APP_PBV
 * @fn      PBV_init
 * @param   PBV_Datatype_TX_t *  - ptr to numerical data
 * @param   PBV_Datatype_TX_t *  - ptr to ascii data 
 * @param   PBV_Datatype_RX_t *  - ptr to data from pbv
 * @brief   
 * @return  void
 * @details 
 *  initializes the PBV init, by linking the application object pointers from the application to 
 * CAN or UART data types
 **********************************************************************************/

void app_PBV_Init(PBV_Datatype_TX_t * Board_To_PBV, PBV_Datatype_TX_t * Board_To_PBVAscii, PBV_Datatype_RX_t *PBV_To_Board)
{
    App_System_To_PBV_Ptr = Board_To_PBV;
    App_System_To_PBV_ASCII_Ptr = Board_To_PBVAscii;
    App_PBV_To_System_Ptr = PBV_To_Board;

    APP_PBV_FUNCS.init(App_System_To_PBV_Ptr, App_System_To_PBV_ASCII_Ptr, PBV_To_Board);
}

/*********************************************************************************
 * @ingroup APP_PBV 
 * @fn      app_PBV_Re_Init
 * @param   PBV_Datatype_TX_t * - ptr to numerical data
 * @brief   
 * @return  void
 * @details 
 *      reinitializes the objects if any parameters( ID, length, etc) are to be changed 
 * to the CAN or UART objects. 
 **********************************************************************************/
void app_PBV_Re_Init(PBV_Datatype_TX_t * ptr)
{
    // experiment with reassigning the protocol IDs in runtime to CAN objects.
    // or changing DLCs...
    APP_PBV_FUNCS.reinit(ptr);
}

/*********************************************************************************
 * @ingroup APP_PBV 
 * @fn      app_PBV_Receive_From_PBV(PBV_Datatype_RX_t * ptr)
 * @param   PBV_Datatype_RX_t * - ptr to numerical data
 * @brief   
 * @return  void
 * @details 
 *      this function changes the state of the application object. this acts as a trigger 
 * for the periodic task to receive data
 **********************************************************************************/
void app_Receive_From_PBV(PBV_Datatype_RX_t * ptr)
{
    if (ptr->PBV_Message_State !=PBV_STATE_RECEIVING)
        ptr->PBV_Message_State = PBV_MESSAGE_READY_TO_RECEIVE;
}

/*********************************************************************************
 * @ingroup APP_PBV 
 * @fn      app_Send_To_PBV(PBV_Datatype_TX_t * ptr)
 * @param   PBV_Datatype_TX_t * - ptr
 * @brief   
 * @return  void
 * @details 
 *      This function links the data from application object to the CAN or UART object and     
 * This function changes the state of the application object. This acts as a trigger 
 * for the periodic task to send data
 **********************************************************************************/

void app_Send_To_PBV(PBV_Datatype_TX_t * ptr)
{
    if (ptr->PBV_Message_State == PBV_MESSAGE_INIT
            ||
        ptr->PBV_Message_State == PBV_MESSAGE_TRANSMITTED   
            ||
        ptr->PBV_Message_State == PBV_MESSAGE_TX_ERROR      // TODO: for CAN. If the tx fails in arbitration. Introduce a RETRY mechanism.
        )
    {
        APP_PBV_FUNCS.linkDataTX(ptr);
        ptr->PBV_Message_State = PBV_MESSAGE_TRANSMIT_START;
    }
}

/*********************************************************************************
 * @ingroup APP_PBV 
 * @fn      app_Read_Received(PBV_Datatype_RX_t * ptr)
 * @param   PBV_Datatype_RX_t * - ptr
 * @brief   
 * @return  void
 * @details 
 *         This function links the data received by CAN or UART objects to the application
 * object
 **********************************************************************************/
 void app_Read_Received_From_PBV(PBV_Datatype_RX_t * ptr)
{
    APP_PBV_FUNCS.linkDataRX(ptr);
}

/*********************************************************************************
 * @ingroup APP_PBV 
 * @fn      app_PBV_Task
 * @param   none
 * @brief   
 * @return  void
 * @details 
 *      main application task. this looks at the states of the TX and RX pointers, and 
 * if the states are changed for RX/TX then executes TX and RX.
 * **********************************************************************************/
static void app_PBV_Task(void)
{
    if (App_PBV_To_System_Ptr->PBV_Message_State == PBV_MESSAGE_READY_TO_RECEIVE 
            ||
        App_PBV_To_System_Ptr->PBV_Message_State == PBV_STATE_RECEIVING
        )
        {
            App_PBV_To_System_Ptr->PBV_Message_State = APP_PBV_FUNCS.rxGui();
            // TODO: default behavior is to ignore.
            if (App_PBV_To_System_Ptr->PBV_Message_State == PBV_MESSAGE_RX_ERROR)
                App_PBV_To_System_Ptr->PBV_Message_State = PBV_MESSAGE_READY_TO_RECEIVE ;
    }

    if (App_System_To_PBV_Ptr->PBV_Message_State == PBV_MESSAGE_TRANSMIT_START
            ||
        App_System_To_PBV_Ptr->PBV_Message_State == PBV_MESSAGE_TRANSMITTING
            )
    {
        App_System_To_PBV_Ptr->PBV_Message_State = APP_PBV_FUNCS.txGui();
    }

    if (App_System_To_PBV_ASCII_Ptr->PBV_Message_State == PBV_MESSAGE_TRANSMIT_START
            ||
        App_System_To_PBV_ASCII_Ptr->PBV_Message_State == PBV_MESSAGE_TRANSMITTING    
            )
    {
        App_System_To_PBV_ASCII_Ptr->PBV_Message_State = APP_PBV_FUNCS.txGuiAscii();
    }
}

/*********************************************************************************
 * @ingroup APP_PBV 
 * @fn      app_PBV_Task_10ms()
 * @param   none
 * @brief   task to be executed every 10ms
 * @return  void
 * @details 
 *  task that is to be executed every 100 ms (CAN msg) can work on slower task as 
 * mcc implements a queuing buffer
 **********************************************************************************/
void app_PBV_Task_10ms(void)
{
#if PBV_CANFD
    app_PBV_Task();
#endif 
}

/*********************************************************************************
 * @ingroup  
 * @fn     app_PBV_Task_100us()
 * @param   
 * @brief   Task to be executed every 100 us
 * @return  void
 * @details 
 *  task that is to be executed every 100 us (UART) for executing UART State machine.
 * calling task has to ensure that the system is not overloaded 
 **********************************************************************************/
void app_PBV_Task_100us(void)
{
#if PBV_UART
    app_PBV_Task();
#endif 
}
