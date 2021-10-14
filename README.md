# ESP32TeslaShuntCan
Use ESP32 with a Tesla Shunt to send the current reading to Can Bus.

Designed for use with A Tesla P100D shunt (must be isolated) with https://easyeda.com/rstevens81/SPI-Isolator-Tesla-Shunt 

Milliamps is put out out 0x521 Litten Endian in bytes 2,3,4,5.
