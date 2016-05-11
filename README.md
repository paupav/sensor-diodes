# sensor-diodes
thermometer with screen made from LED's

This is example of simple arduino project in which you will create temperature sensor with your own segment display.

####Required equipment 
- 38 LED's
- lm35 temperature sensor
- 220 Ohm resistor
- jump wires
- breadboard

####Optional equipment
- atmega 328-pu (optional)
- 5V power suply
- perforated board
- crystal oscilator 16 MHz
- two 22pF capacitors
- solder


####How to
! I'm assuming that you know how to put code on the arduino
! This project can look much nicer if you know how to solder. If you can solder you should use perforated board instead of breadboards.


- make sure that those seven segment displays form number 8
![alt tag](https://github.com/paupav/pic/blob/master/izgled-broja.png)

- connect screen as shown on the scheme ( numbers at the screen ends tells you on to which Arduino pin you should connect them)
![alt tag](https://raw.githubusercontent.com/paupav/pic/master/shema-zavrsni.png)

- upload sketch downlaoded from https://github.com/paupav/sensor-diodes to your arduino

####Scheme with atmega 328-pu (adittional step)

- if you wanna you can make your project smaller by uploading code on to the atmega 328-pu
![alt tag](https://raw.githubusercontent.com/paupav/pic/master/shema-zavrsni-cijela.png)
