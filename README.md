<picture>
    <source media="(prefers-color-scheme: dark)" srcset="images/microchip_logo_white_red.png">
	<source media="(prefers-color-scheme: light)" srcset="images/microchip_logo_black_red.png">
    <img alt="Microchip Logo." src="images/microchip_logo_black_red.png">
</picture> 

# dsPIC33C Power Board Visualizer V2 Demo

## Summary
This is a code example demonstrating the new features of the Power Board Visualizer V2 software. This is designed using dspic33ck256mp506 Digital Power Plugin Module, however with little modifications this should be able to support other DP-PIMs.
## Related Documentation
Please refer to the users guide of PBV V2 that can be found on the same webage where you found this demo 

## Software Used 
to compile the code

MPLAB X <6.10> or later   
XC16 <2.10> or later 

## Hardware Used

DSPIC33CK256MP506 Digital Power PIM (MA330048)  
Digital Power Development Board (DM330029)
To have the CAN-FD functionality additional hardware is needed
Peak Systems CAN FD USB dongle  
and A Can Transceiver  

## Setup


## Operation

The sequence of sending and receiving. they are splited into CAN and UART. for simplicity, the layer encapsualting uart and can is called app_pbv_can_uart, representing files app_PBV_CAN and app_PBV_UART

### Application State machine
#### Application State machine RX
![Application_RX](images/states_rx.png)  
#### Application State machine TX
![Application_TX](images/states_tx.png)

### CAN RX and TX
#### CAN Sequence RX
![RX_CAN](images/rx_can.png)
#### CAN Sequence TX
![TX_CAN](images/tx_can.png)

### UART RX and TX
#### UART Sequence RX
![RX_UART](images/rx_uart.png)
#### UART Sequence TX
![TX_UART](images/tx_uart.png)

#### framing and deframing statemachine for UART
#### Framing statemachine UART RX
![RX_UART](images/statemachine_uart_rx.png)
#### Framing statemachine UART TX
![TX_UART](images/statemachine_uart_tx.png)