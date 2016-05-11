# sensor-diodes
thermometer with screen made from LED's

This is example of simple arduino project in which you will create temperature sensor with your own segment display.
![alt tag](https://raw.githubusercontent.com/paupav/pic/master/slika-zavrsni.png)

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
! This project will show temperature in °C

- connect screen as shown on the scheme ( numbers at the picture bellow are arduino pins ) while making sure that they form number 8 
- connect the part that forms °C to the +5 V and GND
![alt tag](https://raw.githubusercontent.com/paupav/pic/master/shema-zavrsni.png)
![alt tag](https://github.com/paupav/pic/blob/master/izgled-broja.png)


- upload sketch downloaded from https://github.com/paupav/sensor-diodes to your arduino

####Scheme with atmega 328-pu (adittional step)

- if you wanna you can make your project smaller by uploading code on to the atmega 328-pu
![alt tag](https://raw.githubusercontent.com/paupav/pic/master/shema-zavrsni-cijela.png)

####If you have any problem feel free to file a bug
https://github.com/paupav/sensor-diodes/issues
