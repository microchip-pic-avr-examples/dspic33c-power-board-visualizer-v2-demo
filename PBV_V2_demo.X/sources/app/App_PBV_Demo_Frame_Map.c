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

// MCC header files

// other header files
#include "App_PBV_Demo_Frame_Map.h"
#include "../../mcc_generated_files/system/pins.h"
#include "../device/dev_led.h"

#define FIRMWARE_PROTOCOL_ID            0x1000          ///< Firmware ID

#define PBV_GUI_TO_SYSTEM_ID            0x202           ///< ID on which data is received.         
#define PBV_SYSTEM_TO_GUI_ID            0x205           ///< ID on which data is sent. 
#define PBV_SYSTEM_TO_GUI_ASCII_ID      0x206           ///< ID on which log data is sent. 

static PBV_Datatype_TX_t App_PBV_Demo_TX;          ///< Application TX object
static PBV_Datatype_RX_t App_PBV_Demo_RX;          ///< Application RX object
static PBV_Datatype_TX_t App_PBV_Demo_ASCII;       ///< Application TX object for ascii

static PBV_Datatype_TX_t * App_PBV_Demo_TX_Ptr = &App_PBV_Demo_TX;        ///< Application TX object pointer
static PBV_Datatype_RX_t * App_PBV_Demo_RX_Ptr = &App_PBV_Demo_RX;        ///< Application RX object pointer
static PBV_Datatype_TX_t * App_PBV_Demo_ASCII_Ptr = &App_PBV_Demo_ASCII;  ///< Application TX object ascii pointer

uint16_t numbers[32];
uint8_t numbers_eight[64];
uint16_t numbers_temp[32];

static uint32_t counter = 0;
static uint8_t flag = 0;
static uint16_t temp = 0;
uint16_t *address = 0;

uint16_t App_Concatenate_Bank1();
uint16_t App_Concatenate_Bank2();

static uint16_t up_count    =   0;
static uint16_t down_count  = 65535;

void app_Generate_data()
{
    numbers[0] = temp;
    numbers[1] = App_Concatenate_Bank1() ;
    numbers[2] = App_Concatenate_Bank2() ;
    numbers[3] = up_count++ ;
    numbers[4] = down_count-- ;
    PBV_Change_from_Sixteen_to_Eight(numbers, numbers_eight, 5);
    App_PBV_Demo_TX_Ptr->Data_Buffer = numbers_eight;
}

// Call back on receive
void app_Develop_callback(uint16_t length, uint8_t * data)
{
    PBV_Change_from_Eight_to_Sixteen(data, numbers_temp, length);
    uint16_t switchcase = numbers_temp[0];
    switch (switchcase) {
        case 0x0000:
            if (numbers_temp[1] == 1)    
                Dev_LED_On(LED_BOARD_RED);
            if (numbers_temp[1] == 0)
                Dev_LED_Off(LED_BOARD_RED);
            break;
        case 0x0001:
            if (numbers_temp[1] == 1)
                Dev_LED_On(LED_BOARD_GREEN);
            if (numbers_temp[1] == 0)
                Dev_LED_Off(LED_BOARD_GREEN);
            break;
        case 0x0002:
            if (numbers_temp[1] == 1)
            {
                Dev_LED_On(LED_BOARD_GREEN);
                Dev_LED_On(LED_BOARD_RED);
                Dev_LED_On(LED_PIM_RED);
            }
            if (numbers_temp[1] == 0)
            {
                Dev_LED_Off(LED_BOARD_GREEN);
                Dev_LED_Off(LED_BOARD_RED);
                Dev_LED_Off(LED_PIM_RED);
            }
            break;
        case 0xFF00:
            switch(numbers_temp[1])
            {
                case 1:
                {
                    Dev_LED_Blink_Slow(LED_BOARD_GREEN);
                    Dev_LED_Blink_Slow(LED_BOARD_RED);
                    Dev_LED_Blink_Slow(LED_PIM_RED);
                    break;
                }
                case 2:
                {
                    Dev_LED_Blink(LED_BOARD_GREEN);
                    Dev_LED_Blink(LED_BOARD_RED);
                    Dev_LED_Blink(LED_PIM_RED);
                    break;
                }       
                case 3:
                {
                    Dev_LED_Blink_Fast(LED_BOARD_GREEN);
                    Dev_LED_Blink_Fast(LED_BOARD_RED);
                    Dev_LED_Blink_Fast(LED_PIM_RED);
                    break;
                } 
            }
            break;
        case 0xFFFF:
            temp = numbers_temp[1];
            break;
        default:
            break; 
    }
}

// init function 
void app_PBV_Demo_init()
{
    App_PBV_Demo_TX_Ptr->PBV_Protcol_ID        = PBV_SYSTEM_TO_GUI_ID;
    App_PBV_Demo_TX_Ptr->PBV_Signal_Ascii      = PBV_SIGNAL_MODE;
    App_PBV_Demo_TX_Ptr->PBV_Message_State     = PBV_MESSAGE_INIT;
    App_PBV_Demo_TX_Ptr->Length                = 64;

    App_PBV_Demo_RX_Ptr->PBV_Message_State     = PBV_MESSAGE_READY_TO_RECEIVE;
    App_PBV_Demo_RX_Ptr->Callback_Function     = &app_Develop_callback;

    App_PBV_Demo_ASCII_Ptr->PBV_Protcol_ID     = FIRMWARE_PROTOCOL_ID;
    App_PBV_Demo_ASCII_Ptr->PBV_Signal_Ascii   = PBV_ASCII_MODE;
    App_PBV_Demo_ASCII_Ptr->PBV_Message_State  = PBV_MESSAGE_INIT;
    App_PBV_Demo_ASCII_Ptr->Length             = 64;

    app_PBV_Init(App_PBV_Demo_TX_Ptr, App_PBV_Demo_ASCII_Ptr, App_PBV_Demo_RX_Ptr);
}

void app_PBV_Demo_Task_10ms(void)
{
    // Reading received message
    if (App_PBV_Demo_RX_Ptr->PBV_Message_State == PBV_MESSAGE_RECEIVED)
    {        
        app_Read_Received_From_PBV(App_PBV_Demo_RX_Ptr);
        App_PBV_Demo_RX_Ptr->Callback_Function(App_PBV_Demo_RX_Ptr->Length, App_PBV_Demo_RX_Ptr->Data_Buffer);
        //App_PBV_Demo_RX_Ptr->PBV_Message_State = PBV_MESSAGE_READY_TO_RECEIVE;
        // data exchange
        App_PBV_Demo_TX_Ptr->Data_Buffer = App_PBV_Demo_RX_Ptr->Data_Buffer;
        // msg read. Read another
        app_Receive_From_PBV(App_PBV_Demo_RX_Ptr); 
    } 
    ///< 500ms sending 
    if (++counter > 2)
    {
        app_Generate_data();
        app_Send_To_PBV(App_PBV_Demo_TX_Ptr);
        counter = 0;
    }
}

void app_PBV_Demo_Task_1s(void)
{
    if (App_PBV_Demo_ASCII_Ptr->PBV_Protcol_ID == FIRMWARE_PROTOCOL_ID)
    {
        App_PBV_Demo_ASCII_Ptr->Data_Buffer = "Firmware Version 1.0.0.0.......................................!";
        app_Send_To_PBV(App_PBV_Demo_ASCII_Ptr);
        App_PBV_Demo_ASCII_Ptr->PBV_Protcol_ID = PBV_SYSTEM_TO_GUI_ASCII_ID;
        flag = 1;
        return;
    }
    if (App_PBV_Demo_ASCII_Ptr->PBV_Protcol_ID == PBV_SYSTEM_TO_GUI_ASCII_ID)
    {
        if (flag) app_PBV_Re_Init(App_PBV_Demo_ASCII_Ptr);     ///< reinit to new id
        flag = 0; 
    }
    App_PBV_Demo_ASCII_Ptr->Data_Buffer = "Log Message From Protocol ID 0x206.............................\r";
    app_Send_To_PBV(App_PBV_Demo_ASCII_Ptr);
}

uint16_t App_Concatenate_Bank1(){
    return (
           ((Test_Point_23_GetValue() << 15) & 0x8000 )|
           ((Test_Point_24_GetValue() << 14) & 0x4000 )|
           ((Test_Point_25_GetValue() << 13) & 0x2000 )|
           ((Test_Point_26_GetValue() << 12) & 0x1000 )|
           ((Button_SW1_GetValue()    << 11) & 0x0800 )|
           ((Test_Point_28_GetValue() << 10) & 0x0400 )|
           ((Test_Point_31_GetValue() << 9) & 0x0200 )|
           ((Test_Point_32_GetValue() << 8) & 0x0100 )|
           ((Test_Point_33_GetValue() << 7) & 0x0080 )|
           ((Test_Point_34_GetValue() << 6) & 0x0040 )|
           ((Test_Point_35_GetValue() << 5) & 0x0020 )|
           ((Test_Point_36_GetValue() << 4) & 0x0010 )|
           ((Test_Point_37_GetValue() << 3) & 0x0008 )|
           ((Test_Point_38_GetValue() << 2) & 0x0004 )|
           ((Test_Point_40_GetValue() << 1) & 0x0002 )|
           ((Test_Point_41_GetValue() << 0) & 0x0001 )
            );
    }

uint16_t App_Concatenate_Bank2() {
    return (
            ((Test_Point_42_GetValue() << 9) & 0x0200 )|
            ((Test_Point_43_GetValue() << 8) & 0x0100 )|
            ((Test_Point_44_GetValue() << 7) & 0x0080 )|
            ((Test_Point_45_GetValue() << 6) & 0x0040 )|
            ((Test_Point_46_GetValue() << 5) & 0x0020 )|
            ((Test_Point_47_GetValue() << 4) & 0x0010 )|
            ((Test_Point_48_GetValue() << 3) & 0x0008 )|
            ((LED_RED_GetValue() << 2) & 0x0004 )|
            ((LED_GREEN_GetValue() << 1) & 0x0002 ) |
            ((LED_DP_PIM_GetValue() << 0) & 0x0001 )
            );
    }

/*******************************************************************************
 * end of file
 *******************************************************************************/