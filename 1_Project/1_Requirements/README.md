# Requirments
High level requirments (HL1)
* Use rain sensor to detect the rain | detect the rain and send signal
* LL1 -the sensor should be always working when it is on and send signal to the microcontroller

HL2
* Turn the servo motor when the rain is detected and clean the winsheild
* LL2.1 Turn the acutator in such a angle that it dont break the winsheild and other components
* LL2.2 turn the motor repetedly untill the signal is recived
* LL2.3 Turn the acutators slow (more delay) when the rain is low
* LL2.4 Turn the acutators medium speed when the rain intensity is medium
* LL2.5 Turn the acutators fast (less delay) when the rain is high

# Components

# Sensors
* # Rain sensor
* This sensor can detect the rain. when rain falls on the sensor(ie water) the sensor the resistance will increase and it will send signal as high. after a moment the water will conduct the electricty and the sensor will send the signal low.
# Acutators
* # Servo Motor
* The only acutator we are using is the servo motor .A servomotor (or servo motor) is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration. It consists of a suitable motor coupled to a sensor for position feedback. we can alter the speed and angle using the code given to the controller
# Controllers
* # Micro controller
* A microcontroller is a compact integrated circuit designed to govern a specific operation in an embedded system. A typical microcontroller includes a processor, memory and input/output (I/O) peripherals on a single chip.
* # ATmega328
* The ATmega328 is a single-chip microcontroller created by Atmel in the megaAVR family (later Microchip Technology acquired Atmel in 2016). It has a modified Harvard architecture 8-bit RISC processor core.
# Specifcations
The Atmel 8-bit AVR RISC-based microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software-selectable power-saving modes. The device operates between 1.8 and 5.5 volts. The device achieves throughput approaching 1 MIPS/MHz.
# Applications of ATmaga328
ATmega328 is commonly used in many projects and autonomous systems where a simple, low-powered, low-cost micro-controller is needed. Perhaps the most common implementation of this chip is on the popular Arduino development platform, namely the Arduino Uno, Arduino Pro Mini[4] and Arduino Nano models.

# Applications
* This can be used as a windsheild cleaner
* Usefull on an automobile
* This circuit can be used on home windows also
* Every thing is automatic no need of manual involvement

# S W O T Analysis
![Swot](https://user-images.githubusercontent.com/101461694/164467294-74c97f30-4307-4f37-9881-a3b165b7f04c.jpg)

# Strength:
* Automatic
* Accuracy is good
* Operates differently in different intensities
# Threats
* Installation plays a crucial role
* Pins should be configured correctly
* Rainsensor should be secured
# Oppuratunites
* Automatic wiper is having a huge demand in automobile industry
* Further developmet can be made by adding humidity sensor
# Weakness
* Power is most crucial
* Sensor should be not covered with any material

# 4W' & 1H'
# * WHO
Each automobile driver needs this wipers
# * WHAT
This is a automatic wiper which cleans windsheild so that the driver can see the road clearly
# * WHEN
when there changes in weather conditions and when there is rain
# * WHERE
It can be used in any automobile or in a winsheild cleaing
# * HOW
There is no need of human involvement it will operate by itself
