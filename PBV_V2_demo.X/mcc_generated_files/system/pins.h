/**
 * PINS Generated Driver Header File 
 * 
 * @file      pins.h
 *            
 * @defgroup  pinsdriver Pins Driver
 *            
 * @brief     The Pin Driver directs the operation and function of 
 *            the selected device pins using dsPIC MCUs.
 *
 * @skipline @version   Firmware Driver Version 1.0.2
 *
 * @skipline @version   PLIB Version 1.3.0
 *
 * @skipline  Device : dsPIC33CK256MP506
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H
// Section: Includes
#include <xc.h>

// Section: Device Pin Macros

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB9 GPIO Pin which has a custom name of Test_Point_23 to High
 * @pre      The RB9 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_23_SetHigh()          (_LATB9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB9 GPIO Pin which has a custom name of Test_Point_23 to Low
 * @pre      The RB9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_23_SetLow()           (_LATB9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB9 GPIO Pin which has a custom name of Test_Point_23
 * @pre      The RB9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_23_Toggle()           (_LATB9 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB9 GPIO Pin which has a custom name of Test_Point_23
 * @param    none
 * @return   none  
 */
#define Test_Point_23_GetValue()         _RB9

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB9 GPIO Pin which has a custom name of Test_Point_23 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_23_SetDigitalInput()  (_TRISB9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB9 GPIO Pin which has a custom name of Test_Point_23 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_23_SetDigitalOutput() (_TRISB9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB10 GPIO Pin which has a custom name of Test_Point_37 to High
 * @pre      The RB10 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_37_SetHigh()          (_LATB10 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB10 GPIO Pin which has a custom name of Test_Point_37 to Low
 * @pre      The RB10 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_37_SetLow()           (_LATB10 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB10 GPIO Pin which has a custom name of Test_Point_37
 * @pre      The RB10 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_37_Toggle()           (_LATB10 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB10 GPIO Pin which has a custom name of Test_Point_37
 * @param    none
 * @return   none  
 */
#define Test_Point_37_GetValue()         _RB10

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB10 GPIO Pin which has a custom name of Test_Point_37 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_37_SetDigitalInput()  (_TRISB10 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB10 GPIO Pin which has a custom name of Test_Point_37 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_37_SetDigitalOutput() (_TRISB10 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB11 GPIO Pin which has a custom name of Test_Point_41 to High
 * @pre      The RB11 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_41_SetHigh()          (_LATB11 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB11 GPIO Pin which has a custom name of Test_Point_41 to Low
 * @pre      The RB11 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_41_SetLow()           (_LATB11 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB11 GPIO Pin which has a custom name of Test_Point_41
 * @pre      The RB11 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_41_Toggle()           (_LATB11 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB11 GPIO Pin which has a custom name of Test_Point_41
 * @param    none
 * @return   none  
 */
#define Test_Point_41_GetValue()         _RB11

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB11 GPIO Pin which has a custom name of Test_Point_41 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_41_SetDigitalInput()  (_TRISB11 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB11 GPIO Pin which has a custom name of Test_Point_41 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_41_SetDigitalOutput() (_TRISB11 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB12 GPIO Pin which has a custom name of Test_Point_42 to High
 * @pre      The RB12 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_42_SetHigh()          (_LATB12 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB12 GPIO Pin which has a custom name of Test_Point_42 to Low
 * @pre      The RB12 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_42_SetLow()           (_LATB12 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB12 GPIO Pin which has a custom name of Test_Point_42
 * @pre      The RB12 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_42_Toggle()           (_LATB12 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB12 GPIO Pin which has a custom name of Test_Point_42
 * @param    none
 * @return   none  
 */
#define Test_Point_42_GetValue()         _RB12

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB12 GPIO Pin which has a custom name of Test_Point_42 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_42_SetDigitalInput()  (_TRISB12 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB12 GPIO Pin which has a custom name of Test_Point_42 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_42_SetDigitalOutput() (_TRISB12 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB13 GPIO Pin which has a custom name of Test_Point_40 to High
 * @pre      The RB13 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_40_SetHigh()          (_LATB13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB13 GPIO Pin which has a custom name of Test_Point_40 to Low
 * @pre      The RB13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_40_SetLow()           (_LATB13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB13 GPIO Pin which has a custom name of Test_Point_40
 * @pre      The RB13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_40_Toggle()           (_LATB13 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB13 GPIO Pin which has a custom name of Test_Point_40
 * @param    none
 * @return   none  
 */
#define Test_Point_40_GetValue()         _RB13

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB13 GPIO Pin which has a custom name of Test_Point_40 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_40_SetDigitalInput()  (_TRISB13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB13 GPIO Pin which has a custom name of Test_Point_40 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_40_SetDigitalOutput() (_TRISB13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB14 GPIO Pin which has a custom name of Test_Point_45 to High
 * @pre      The RB14 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_45_SetHigh()          (_LATB14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB14 GPIO Pin which has a custom name of Test_Point_45 to Low
 * @pre      The RB14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_45_SetLow()           (_LATB14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB14 GPIO Pin which has a custom name of Test_Point_45
 * @pre      The RB14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_45_Toggle()           (_LATB14 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB14 GPIO Pin which has a custom name of Test_Point_45
 * @param    none
 * @return   none  
 */
#define Test_Point_45_GetValue()         _RB14

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB14 GPIO Pin which has a custom name of Test_Point_45 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_45_SetDigitalInput()  (_TRISB14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB14 GPIO Pin which has a custom name of Test_Point_45 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_45_SetDigitalOutput() (_TRISB14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB15 GPIO Pin which has a custom name of Test_Point_47 to High
 * @pre      The RB15 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_47_SetHigh()          (_LATB15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB15 GPIO Pin which has a custom name of Test_Point_47 to Low
 * @pre      The RB15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_47_SetLow()           (_LATB15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB15 GPIO Pin which has a custom name of Test_Point_47
 * @pre      The RB15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_47_Toggle()           (_LATB15 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB15 GPIO Pin which has a custom name of Test_Point_47
 * @param    none
 * @return   none  
 */
#define Test_Point_47_GetValue()         _RB15

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB15 GPIO Pin which has a custom name of Test_Point_47 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_47_SetDigitalInput()  (_TRISB15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB15 GPIO Pin which has a custom name of Test_Point_47 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_47_SetDigitalOutput() (_TRISB15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC4 GPIO Pin which has a custom name of Test_Point_35 to High
 * @pre      The RC4 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_35_SetHigh()          (_LATC4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC4 GPIO Pin which has a custom name of Test_Point_35 to Low
 * @pre      The RC4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_35_SetLow()           (_LATC4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC4 GPIO Pin which has a custom name of Test_Point_35
 * @pre      The RC4 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_35_Toggle()           (_LATC4 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC4 GPIO Pin which has a custom name of Test_Point_35
 * @param    none
 * @return   none  
 */
#define Test_Point_35_GetValue()         _RC4

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC4 GPIO Pin which has a custom name of Test_Point_35 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_35_SetDigitalInput()  (_TRISC4 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC4 GPIO Pin which has a custom name of Test_Point_35 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_35_SetDigitalOutput() (_TRISC4 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC5 GPIO Pin which has a custom name of Test_Point_38 to High
 * @pre      The RC5 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_38_SetHigh()          (_LATC5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC5 GPIO Pin which has a custom name of Test_Point_38 to Low
 * @pre      The RC5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_38_SetLow()           (_LATC5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC5 GPIO Pin which has a custom name of Test_Point_38
 * @pre      The RC5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_38_Toggle()           (_LATC5 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC5 GPIO Pin which has a custom name of Test_Point_38
 * @param    none
 * @return   none  
 */
#define Test_Point_38_GetValue()         _RC5

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC5 GPIO Pin which has a custom name of Test_Point_38 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_38_SetDigitalInput()  (_TRISC5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC5 GPIO Pin which has a custom name of Test_Point_38 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_38_SetDigitalOutput() (_TRISC5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC8 GPIO Pin which has a custom name of Test_Point_24 to High
 * @pre      The RC8 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_24_SetHigh()          (_LATC8 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC8 GPIO Pin which has a custom name of Test_Point_24 to Low
 * @pre      The RC8 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_24_SetLow()           (_LATC8 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC8 GPIO Pin which has a custom name of Test_Point_24
 * @pre      The RC8 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_24_Toggle()           (_LATC8 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC8 GPIO Pin which has a custom name of Test_Point_24
 * @param    none
 * @return   none  
 */
#define Test_Point_24_GetValue()         _RC8

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC8 GPIO Pin which has a custom name of Test_Point_24 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_24_SetDigitalInput()  (_TRISC8 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC8 GPIO Pin which has a custom name of Test_Point_24 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_24_SetDigitalOutput() (_TRISC8 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC9 GPIO Pin which has a custom name of Test_Point_32 to High
 * @pre      The RC9 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_32_SetHigh()          (_LATC9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC9 GPIO Pin which has a custom name of Test_Point_32 to Low
 * @pre      The RC9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_32_SetLow()           (_LATC9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC9 GPIO Pin which has a custom name of Test_Point_32
 * @pre      The RC9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_32_Toggle()           (_LATC9 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC9 GPIO Pin which has a custom name of Test_Point_32
 * @param    none
 * @return   none  
 */
#define Test_Point_32_GetValue()         _RC9

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC9 GPIO Pin which has a custom name of Test_Point_32 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_32_SetDigitalInput()  (_TRISC9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC9 GPIO Pin which has a custom name of Test_Point_32 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_32_SetDigitalOutput() (_TRISC9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC10 GPIO Pin which has a custom name of Test_Point_25 to High
 * @pre      The RC10 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_25_SetHigh()          (_LATC10 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC10 GPIO Pin which has a custom name of Test_Point_25 to Low
 * @pre      The RC10 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_25_SetLow()           (_LATC10 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC10 GPIO Pin which has a custom name of Test_Point_25
 * @pre      The RC10 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_25_Toggle()           (_LATC10 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC10 GPIO Pin which has a custom name of Test_Point_25
 * @param    none
 * @return   none  
 */
#define Test_Point_25_GetValue()         _RC10

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC10 GPIO Pin which has a custom name of Test_Point_25 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_25_SetDigitalInput()  (_TRISC10 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC10 GPIO Pin which has a custom name of Test_Point_25 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_25_SetDigitalOutput() (_TRISC10 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC11 GPIO Pin which has a custom name of Button_SW1 to High
 * @pre      The RC11 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Button_SW1_SetHigh()          (_LATC11 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC11 GPIO Pin which has a custom name of Button_SW1 to Low
 * @pre      The RC11 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Button_SW1_SetLow()           (_LATC11 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC11 GPIO Pin which has a custom name of Button_SW1
 * @pre      The RC11 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Button_SW1_Toggle()           (_LATC11 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC11 GPIO Pin which has a custom name of Button_SW1
 * @param    none
 * @return   none  
 */
#define Button_SW1_GetValue()         _RC11

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC11 GPIO Pin which has a custom name of Button_SW1 as Input
 * @param    none
 * @return   none  
 */
#define Button_SW1_SetDigitalInput()  (_TRISC11 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC11 GPIO Pin which has a custom name of Button_SW1 as Output
 * @param    none
 * @return   none  
 */
#define Button_SW1_SetDigitalOutput() (_TRISC11 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC12 GPIO Pin which has a custom name of Test_Point_46 to High
 * @pre      The RC12 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_46_SetHigh()          (_LATC12 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC12 GPIO Pin which has a custom name of Test_Point_46 to Low
 * @pre      The RC12 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_46_SetLow()           (_LATC12 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC12 GPIO Pin which has a custom name of Test_Point_46
 * @pre      The RC12 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_46_Toggle()           (_LATC12 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC12 GPIO Pin which has a custom name of Test_Point_46
 * @param    none
 * @return   none  
 */
#define Test_Point_46_GetValue()         _RC12

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC12 GPIO Pin which has a custom name of Test_Point_46 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_46_SetDigitalInput()  (_TRISC12 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC12 GPIO Pin which has a custom name of Test_Point_46 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_46_SetDigitalOutput() (_TRISC12 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC13 GPIO Pin which has a custom name of Test_Point_48 to High
 * @pre      The RC13 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_48_SetHigh()          (_LATC13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC13 GPIO Pin which has a custom name of Test_Point_48 to Low
 * @pre      The RC13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_48_SetLow()           (_LATC13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC13 GPIO Pin which has a custom name of Test_Point_48
 * @pre      The RC13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_48_Toggle()           (_LATC13 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC13 GPIO Pin which has a custom name of Test_Point_48
 * @param    none
 * @return   none  
 */
#define Test_Point_48_GetValue()         _RC13

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC13 GPIO Pin which has a custom name of Test_Point_48 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_48_SetDigitalInput()  (_TRISC13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC13 GPIO Pin which has a custom name of Test_Point_48 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_48_SetDigitalOutput() (_TRISC13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC14 GPIO Pin which has a custom name of Test_Point_31 to High
 * @pre      The RC14 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_31_SetHigh()          (_LATC14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC14 GPIO Pin which has a custom name of Test_Point_31 to Low
 * @pre      The RC14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_31_SetLow()           (_LATC14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC14 GPIO Pin which has a custom name of Test_Point_31
 * @pre      The RC14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_31_Toggle()           (_LATC14 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC14 GPIO Pin which has a custom name of Test_Point_31
 * @param    none
 * @return   none  
 */
#define Test_Point_31_GetValue()         _RC14

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC14 GPIO Pin which has a custom name of Test_Point_31 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_31_SetDigitalInput()  (_TRISC14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC14 GPIO Pin which has a custom name of Test_Point_31 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_31_SetDigitalOutput() (_TRISC14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC15 GPIO Pin which has a custom name of Test_Point_33 to High
 * @pre      The RC15 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_33_SetHigh()          (_LATC15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RC15 GPIO Pin which has a custom name of Test_Point_33 to Low
 * @pre      The RC15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_33_SetLow()           (_LATC15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RC15 GPIO Pin which has a custom name of Test_Point_33
 * @pre      The RC15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_33_Toggle()           (_LATC15 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RC15 GPIO Pin which has a custom name of Test_Point_33
 * @param    none
 * @return   none  
 */
#define Test_Point_33_GetValue()         _RC15

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC15 GPIO Pin which has a custom name of Test_Point_33 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_33_SetDigitalInput()  (_TRISC15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RC15 GPIO Pin which has a custom name of Test_Point_33 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_33_SetDigitalOutput() (_TRISC15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD0 GPIO Pin which has a custom name of Test_Point_44 to High
 * @pre      The RD0 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_44_SetHigh()          (_LATD0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD0 GPIO Pin which has a custom name of Test_Point_44 to Low
 * @pre      The RD0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_44_SetLow()           (_LATD0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD0 GPIO Pin which has a custom name of Test_Point_44
 * @pre      The RD0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_44_Toggle()           (_LATD0 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD0 GPIO Pin which has a custom name of Test_Point_44
 * @param    none
 * @return   none  
 */
#define Test_Point_44_GetValue()         _RD0

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD0 GPIO Pin which has a custom name of Test_Point_44 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_44_SetDigitalInput()  (_TRISD0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD0 GPIO Pin which has a custom name of Test_Point_44 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_44_SetDigitalOutput() (_TRISD0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD1 GPIO Pin which has a custom name of Test_Point_43 to High
 * @pre      The RD1 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_43_SetHigh()          (_LATD1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD1 GPIO Pin which has a custom name of Test_Point_43 to Low
 * @pre      The RD1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_43_SetLow()           (_LATD1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD1 GPIO Pin which has a custom name of Test_Point_43
 * @pre      The RD1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_43_Toggle()           (_LATD1 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD1 GPIO Pin which has a custom name of Test_Point_43
 * @param    none
 * @return   none  
 */
#define Test_Point_43_GetValue()         _RD1

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD1 GPIO Pin which has a custom name of Test_Point_43 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_43_SetDigitalInput()  (_TRISD1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD1 GPIO Pin which has a custom name of Test_Point_43 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_43_SetDigitalOutput() (_TRISD1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD5 GPIO Pin which has a custom name of Test_Point_34 to High
 * @pre      The RD5 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_34_SetHigh()          (_LATD5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD5 GPIO Pin which has a custom name of Test_Point_34 to Low
 * @pre      The RD5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_34_SetLow()           (_LATD5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD5 GPIO Pin which has a custom name of Test_Point_34
 * @pre      The RD5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_34_Toggle()           (_LATD5 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD5 GPIO Pin which has a custom name of Test_Point_34
 * @param    none
 * @return   none  
 */
#define Test_Point_34_GetValue()         _RD5

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD5 GPIO Pin which has a custom name of Test_Point_34 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_34_SetDigitalInput()  (_TRISD5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD5 GPIO Pin which has a custom name of Test_Point_34 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_34_SetDigitalOutput() (_TRISD5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD6 GPIO Pin which has a custom name of Test_Point_36 to High
 * @pre      The RD6 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_36_SetHigh()          (_LATD6 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD6 GPIO Pin which has a custom name of Test_Point_36 to Low
 * @pre      The RD6 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_36_SetLow()           (_LATD6 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD6 GPIO Pin which has a custom name of Test_Point_36
 * @pre      The RD6 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_36_Toggle()           (_LATD6 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD6 GPIO Pin which has a custom name of Test_Point_36
 * @param    none
 * @return   none  
 */
#define Test_Point_36_GetValue()         _RD6

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD6 GPIO Pin which has a custom name of Test_Point_36 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_36_SetDigitalInput()  (_TRISD6 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD6 GPIO Pin which has a custom name of Test_Point_36 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_36_SetDigitalOutput() (_TRISD6 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD8 GPIO Pin which has a custom name of LED_RED to High
 * @pre      The RD8 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED_RED_SetHigh()          (_LATD8 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD8 GPIO Pin which has a custom name of LED_RED to Low
 * @pre      The RD8 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED_RED_SetLow()           (_LATD8 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD8 GPIO Pin which has a custom name of LED_RED
 * @pre      The RD8 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED_RED_Toggle()           (_LATD8 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD8 GPIO Pin which has a custom name of LED_RED
 * @param    none
 * @return   none  
 */
#define LED_RED_GetValue()         _RD8

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD8 GPIO Pin which has a custom name of LED_RED as Input
 * @param    none
 * @return   none  
 */
#define LED_RED_SetDigitalInput()  (_TRISD8 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD8 GPIO Pin which has a custom name of LED_RED as Output
 * @param    none
 * @return   none  
 */
#define LED_RED_SetDigitalOutput() (_TRISD8 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD9 GPIO Pin which has a custom name of Test_Point_28 to High
 * @pre      The RD9 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_28_SetHigh()          (_LATD9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD9 GPIO Pin which has a custom name of Test_Point_28 to Low
 * @pre      The RD9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_28_SetLow()           (_LATD9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD9 GPIO Pin which has a custom name of Test_Point_28
 * @pre      The RD9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_28_Toggle()           (_LATD9 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD9 GPIO Pin which has a custom name of Test_Point_28
 * @param    none
 * @return   none  
 */
#define Test_Point_28_GetValue()         _RD9

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD9 GPIO Pin which has a custom name of Test_Point_28 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_28_SetDigitalInput()  (_TRISD9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD9 GPIO Pin which has a custom name of Test_Point_28 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_28_SetDigitalOutput() (_TRISD9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD13 GPIO Pin which has a custom name of LED_GREEN to High
 * @pre      The RD13 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED_GREEN_SetHigh()          (_LATD13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD13 GPIO Pin which has a custom name of LED_GREEN to Low
 * @pre      The RD13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED_GREEN_SetLow()           (_LATD13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD13 GPIO Pin which has a custom name of LED_GREEN
 * @pre      The RD13 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED_GREEN_Toggle()           (_LATD13 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD13 GPIO Pin which has a custom name of LED_GREEN
 * @param    none
 * @return   none  
 */
#define LED_GREEN_GetValue()         _RD13

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD13 GPIO Pin which has a custom name of LED_GREEN as Input
 * @param    none
 * @return   none  
 */
#define LED_GREEN_SetDigitalInput()  (_TRISD13 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD13 GPIO Pin which has a custom name of LED_GREEN as Output
 * @param    none
 * @return   none  
 */
#define LED_GREEN_SetDigitalOutput() (_TRISD13 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD14 GPIO Pin which has a custom name of Test_Point_26 to High
 * @pre      The RD14 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define Test_Point_26_SetHigh()          (_LATD14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD14 GPIO Pin which has a custom name of Test_Point_26 to Low
 * @pre      The RD14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_26_SetLow()           (_LATD14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD14 GPIO Pin which has a custom name of Test_Point_26
 * @pre      The RD14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define Test_Point_26_Toggle()           (_LATD14 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD14 GPIO Pin which has a custom name of Test_Point_26
 * @param    none
 * @return   none  
 */
#define Test_Point_26_GetValue()         _RD14

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD14 GPIO Pin which has a custom name of Test_Point_26 as Input
 * @param    none
 * @return   none  
 */
#define Test_Point_26_SetDigitalInput()  (_TRISD14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD14 GPIO Pin which has a custom name of Test_Point_26 as Output
 * @param    none
 * @return   none  
 */
#define Test_Point_26_SetDigitalOutput() (_TRISD14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD15 GPIO Pin which has a custom name of LED_DP_PIM to High
 * @pre      The RD15 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED_DP_PIM_SetHigh()          (_LATD15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD15 GPIO Pin which has a custom name of LED_DP_PIM to Low
 * @pre      The RD15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED_DP_PIM_SetLow()           (_LATD15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD15 GPIO Pin which has a custom name of LED_DP_PIM
 * @pre      The RD15 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED_DP_PIM_Toggle()           (_LATD15 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD15 GPIO Pin which has a custom name of LED_DP_PIM
 * @param    none
 * @return   none  
 */
#define LED_DP_PIM_GetValue()         _RD15

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD15 GPIO Pin which has a custom name of LED_DP_PIM as Input
 * @param    none
 * @return   none  
 */
#define LED_DP_PIM_SetDigitalInput()  (_TRISD15 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD15 GPIO Pin which has a custom name of LED_DP_PIM as Output
 * @param    none
 * @return   none  
 */
#define LED_DP_PIM_SetDigitalOutput() (_TRISD15 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Initializes the PINS module
 * @param    none
 * @return   none  
 */
void PINS_Initialize(void);



#endif
