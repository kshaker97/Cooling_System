<h1 align="center">
  Cooling System Using ATmega8
</h1>

<h4 align="center">A cooling system has been developed, designed to activate a fan and regulate its speed in direct response to
temperature variations, utilizing an ATmega8 microcontroller for control.</h4>

## Table of Contents:
- [Introduction](#introduction)
- [System Layers](#system-layers)
- [Hardware Connections](#hardware-connections)
- [Schematic](#schematic)

## Introduction:
This document outlines the design specifications for a room cooling system utilizing an ATmega8 microcontroller. The system aims to regulate room temperature by measuring it with an LM35 sensor, displaying it on a 16x2 LCD display and two digits seven-segment display, activating a LED indicator, a buzzer, and a DC motor fan if the temperature exceeds 35°C. The duty cycle of the DC motor fan is also displayed on the LCD.
## System Layers:
![Untitled Diagram drawio(2)](https://github.com/kshaker97/cooling-system-atmega8/assets/145481109/86780b59-ac5d-4052-9525-2c8efc85877d)
## Hardware Connections:

| DEVICE    |     |      |     |     |     |     |     |     |     |     |     |
| ------- | ------------ | ------- | ------- |------- |------- |------- |------- |------- |------- |------- |------- |
|   LM35 SENSOR  | +Ve    | Vout     | -Ve    | -    | -    | -    | -    | -    | -    | -    | -    |
|   PIN  | Vcc    | PC0     | GND    | -    | -    | -    | -    | -    | -    | -    | -    |
|   16x2 LCD  | RS    | RW     | EN    | D0    | D1    | D2    | D3    | D4    | D5    | D6    | D7    |
|   PIN  | PC1    | GND     | PC2    | -    | -    | -    | -    | PC3    | PC4    | PC5    | PC6    |
|   DC-MOTOR  | +ve    | -ve     | -    | -    | -    | -    | -    | -    | -    | -    | -    |
|   PIN  | PB1    | GND     | -    | -    | -    | -    | -    | -    | -    | -    | -    |
|   LED  | +ve    | -ve     | -    | -    | -    | -    | -    | -    | -    | -    | -    |
|   PIN  | PB4    | GND     | -    | -    | -    | -    | -    | -    | -    | -    | -    |
|   BUZZER  | +ve    | -ve     | -    | -    | -    | -    | -    | -    | -    | -    | -    |
|   PIN  | PB5    | GND     | -    | -    | -    | -    | -    | -    | -    | -    | -    |
|   7SEGEMENT  | a    | b     | c    | d    | e    | f    | g    | .    | EN0    | EN1    | -    |
|   PIN  | PD0    | PD1     | PD2    | PD3    | PD4    | PD5    | PD6    | PD7    | PB2    | PB3    | -    |






## Schematic
![11(LCD)](https://github.com/kshaker97/Cooling_System/assets/145481109/89372a8f-ccb1-4e07-a90e-e69f77ced972)
