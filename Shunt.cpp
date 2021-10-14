#include "Shunt.h"

int buff[18];
const int chipSelectPin = SS;

void Shunt::resetBuffer() {
    for (int I = 1; I < 19; I++)
    {
      buff[I] = 0;
    }
}

void Shunt::initialiseShunt() {
    SPI.begin();
    pinMode(chipSelectPin, OUTPUT);
    resetBuffer();
    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x7f);
    buff[1] = SPI.transfer(0x7f);
    buff[2] = SPI.transfer(0x21);
    buff[3] = SPI.transfer(0xde);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x80);
    buff[8] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x80);
    buff[7] = SPI.transfer(0x00);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();

    for (int I = 0; I < 10; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    Serial.println();
    
    resetBuffer();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x4f);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x00);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0xBC);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    
    resetBuffer();
    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x4E);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x00);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x63);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    
    resetBuffer();

    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x4E);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x00);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x63);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    
    resetBuffer();

    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x16);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x02);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0x33);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }

    resetBuffer();
    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x14);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0xDC);
    buff[4] = SPI.transfer(0x05);
    buff[5] = SPI.transfer(0xC2);
    buff[6] = SPI.transfer(0x01);
    buff[7] = SPI.transfer(0x83);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    
    resetBuffer();
    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x13);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x04);
    buff[4] = SPI.transfer(0x01);
    buff[5] = SPI.transfer(0x02);
    buff[6] = SPI.transfer(0x08);
    buff[7] = SPI.transfer(0x94);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    
    resetBuffer();

    Serial.println();

    SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
    // take the chip select low to select the device:
    digitalWrite(chipSelectPin, LOW);
    // send the device the register you want to read:
    buff[0] = SPI.transfer(0x17);
    buff[1] = SPI.transfer(0x00);
    buff[2] = SPI.transfer(0x00);
    buff[3] = SPI.transfer(0x00);
    buff[4] = SPI.transfer(0x00);
    buff[5] = SPI.transfer(0x00);
    buff[6] = SPI.transfer(0x00);
    buff[7] = SPI.transfer(0xC0);
    // take the chip select high to de-select:
    digitalWrite(chipSelectPin, HIGH);
    // release control of the SPI port
    SPI.endTransaction();
    for (int I = 0; I < 8; I++)
    {
      Serial.print(buff[I], HEX);
      Serial.print(" ");
    }
    resetBuffer();
}

int32_t Shunt::readCurrent() {
  SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0));
  // take the chip select low to select the device:
  digitalWrite(chipSelectPin, LOW);
  // send the device the register you want to read:
  buff[0] = SPI.transfer(0x41);
  for (int I = 1; I < 7; I++)
  {
    buff[I] = SPI.transfer(0x00);
  }
  buff[8] = SPI.transfer(0x9A);
  // take the chip select high to de-select:
  /*for (int I = 8; I < 13; I++)
  {
    buff[I] = SPI.transfer(0x00);
  }*/
  digitalWrite(chipSelectPin, HIGH);
  // release control of the SPI port
  SPI.endTransaction();
  /*
  for (int I = 0; I <9; I++)
  {
    Serial.print(buff[I], HEX);
    Serial.print(" ");
  }*/
  int32_t current = ((int32_t(buff[6]*256+buff[5])*256+buff[4])*256+buff[3]) ;

  return current;
}
