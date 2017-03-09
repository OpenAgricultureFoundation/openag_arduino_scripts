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
SimpleActuator chillerCompressor(10, false); // pulse generator
SimpleActuator waterPump(32, true); // K12, pump5
SimpleActuator phDownPump(31, true); // K13, pump4
SimpleActuator phUpPump(30, true); // K14, pump3
SimpleActuator nutrientBPump(29, true); // K15, pump2
SimpleActuator nutrientAPump(28, true); // K16, pump1


// Runs once
void setup() {   
  /***********DO NOT CHANGE THESE************/  
  relayPower1.set("ON"); // ALWAYS LEAVE ON
  relayPower2.set("ON"); // ALWAYS LEAVE ON
  relayGround1.set("ON"); // ALWAYS LEAVE ON
  relayGround2.set("ON"); // ALWAYS LEAVE ON
  /******************************************/

  
  /************** CHANGE THESE **************/
  heater1.set("OFF");
  redLED.set("OFF");
  whiteLED.set("ON");
  blueLED.set("OFF");
  chamberFan.set("OFF");
  circulationPump.set("OFF");
  aerationPump.set("OFF");
  airFlush.set("OFF");
  heater2.set("OFF");
  chillerPump.set("OFF");
  chillerFan.set("OFF");
  chillerCompressor.set("OFF");
  waterPump.set("OFF");
  phDownPump.set("OFF");
  phUpPump.set("OFF");
  nutrientBPump.set("OFF");
  nutrientAPump.set("OFF");
  /****************************************/
}

void loop(){}
