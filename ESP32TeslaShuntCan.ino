#include "Shunt.h"
#include <CAN.h>
#include <TaskScheduler.h>

int32_t current = 0;
Shunt shunt;

void ms10Task();
Task ms10(10, -1, &ms10Task);
Scheduler runner;

void setup() {
  shunt.initialiseShunt();
  CAN.begin(500E3);

  runner.init();
  
  runner.addTask(ms10);
  ms10.enable();
}

void ms10Task() {
  current = shunt.readCurrent();
  //60000
  Serial.println(" ");
  Serial.print(current);

  CAN.beginPacket(0x521);
  CAN.write(0x0);
  CAN.write(0x0);
  CAN.write((current & 0xff000000) >> 24);
  CAN.write((current & 0x00ff0000) >> 16);
  CAN.write((current & 0x0000ff00) >> 8);
  CAN.write((current & 0x000000ff));
  CAN.write(0x0);
  CAN.write(0x0);
  CAN.endPacket();
}



void loop() {
  runner.execute();
}
