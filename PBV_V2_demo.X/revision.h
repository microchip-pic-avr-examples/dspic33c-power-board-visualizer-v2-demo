/*
© [2023] Microchip Technology Inc. and its subsidiaries.

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


// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef REVISION_H
#define	REVISION_H

#define MAJOR       '1'
#define MINOR       '1'
#define PATCH       '0'
#define HIGHVOLTAGE '0'

/*******************************************************************************
 * @fn      revision history 4.2.3.0
 * @details DC input mode added to test current loop
 *          option also based on #ifdefs in drv_controller_TPBLPFC.h                      
 *                                
 *******************************************************************************/
/*******************************************************************************
 * @fn      revision history 4.2.2.0
 * @details dedicated compensators for 1/3Ph and LV/HV added
 *          selected via #ifdefs in drv_controller_TPBLPFC.h                      
 *                                
 *******************************************************************************/
/*******************************************************************************
 * @fn      revision history 4.2.1.0
 * @details ADCON0 ISR optimized: 7.4us with out dff
 *                                8.2us with dff
 *          Single Phase 2 legs IL is based on L1 and L3                      
 *******************************************************************************/
/*******************************************************************************
 * @fn      revision history 4.2.0.0
 * @details delay after relay on and wait until startup ramp both set to 50ms
 *          ADCON0 ISR optimized
 *          Single Phase 2 legs IL is based on L1 and L2 
 *          tested for 3-phase low voltage to ship             
 *******************************************************************************/
/*******************************************************************************
 * @fn      revision history 9.0.2.0
 * @details Ported to Melody
 *          Usage of framework configurator from artifact as release candidate
 *          Testoption for testing all 3 phases individual as 
 *          single phase option look for <<< only testing >>>       
 *******************************************************************************/
/*******************************************************************************
 * @fn      revision history 1.1.0.0
 * @details Official Release with DCDT and Melody 
 *          Usage of framework configurator release 1.0.0
 *          all test options removed compared to previous version
 *                 
 *******************************************************************************/


#endif	/* REVISION_H */

