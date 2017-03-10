#include "simple_actuator.h"

SimpleActuator relayPower1(44, false);
SimpleActuator relayPower2(45, false);
SimpleActuator relayGround1(26, true);
SimpleActuator relayGround2(27, true);
SimpleActuator heater1(43, true); // K1
SimpleActuator redLED(42, true); // K2
SimpleActuator whiteLED(41, true); // K3
SimpleActuator blueLED(40, true); // K4
SimpleActuator chamberFan(39, true); // K5
SimpleActuator circulationPump(38, true); // K6
SimpleActuator aerationPump(37, true); // K7
SimpleActuator airFlush(36, true); // K8
SimpleActuator heater2(35, true); // K9
SimpleActuator chillerPump(34, true); // K10
SimpleActuator chillerFan(33, true); // K11
SimpleActuator waterPump(32, true); // K12, pump5, bottom right
SimpleActuator phDownPump(31, true); // K13, pump4, bottom left
SimpleActuator phUpPump(30, true); // K14, pump3, center
SimpleActuator nutrientBPump(29, true); // K15, pump2, top right
SimpleActuator nutrientAPump(28, true); // K16, pump1, top left

// Newer systems have tone version, older have pulse generator board
SimpleActuator chillerCompressor(10, false); // D10 (pulse generator board)
ChillerCompressorTone chillerCompressorTone(9); // D9 (arduino tone function)

// Runs once
void setup() {   
  
  /************** CHANGE THESE **************/
  heater1.set("OFF"); // K1
  redLED.set("OFF"); // K2
  whiteLED.set("ON"); // K3
  blueLED.set("OFF"); // K4
  chamberFan.set("OFF"); // K5
  circulationPump.set("OFF"); // K6
  aerationPump.set("OFF"); // K7
  airFlush.set("OFF"); // K8
  heater2.set("OFF"); // K9
  chillerPump.set("OFF"); // K10
  chillerFan.set("OFF"); // K11
  waterPump.set("OFF"); // K12, pump5, bottom right
  phDownPump.set("OFF"); // K13, pump4, bottom left
  phUpPump.set("OFF"); // K14, pump3, center pump
  nutrientBPump.set("OFF"); // K15, pump2, top right
  nutrientAPump.set("OFF"); // K16, pump1, top left

  // Newer systems have tone version, older have pulse generator board
  chillerCompressor.set("OFF"); // D10
  chillerCompressorTone.set("OFF"); // D9
  /****************************************/
}

void loop(){}
