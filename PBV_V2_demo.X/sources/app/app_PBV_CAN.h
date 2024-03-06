/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * @file    app_PBV_CAN.h   
 * @author  M70027
 * @brief   Power Board Visualizer CAN interface 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef APP_PBV_CAN_INTERFACE_H
#define	APP_PBV_CAN_INTERFACE_H

#include "app_PBV_interface.h"

// Public Functions
void PBV_CAN_Init(PBV_Datatype_TX_t * boardToPBV, PBV_Datatype_TX_t * boardToPBVAscii, PBV_Datatype_RX_t *pbvToBoard);
uint8_t PBV_CAN_Receive_from_GUI(void);
uint8_t PBV_CAN_Transmit_to_GUI(void);
uint8_t PBV_CAN_Transmit_Ascii_to_GUI(void);
void PBV_CAN_Reinit(PBV_Datatype_TX_t * ptr);
void PBV_CAN_Link_Data_TX(PBV_Datatype_TX_t * ptr);
void PBV_CAN_Link_Data_RX(PBV_Datatype_RX_t * ptr);

#endif  /* APP_PBV_CAN_INTERFACE_H */

