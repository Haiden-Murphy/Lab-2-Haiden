#include <Arduino.h> 
 
//Statment of Authorship: I, Haiden Murphy, student number 000839028 certify that this material is my original work. 
//No other person's work has been used without due acknowledgment and I have not made my workavailable to anyone else.
 
void setup() { 
  // configure the USB serial monitor 
  Serial.begin(115200); 
} 
 
void loop() { 
  int iVal; 
  double voltage;
  double temp;

  // read digitized value from the D1 Mini's A/D convertor 
  iVal = analogRead(A0);

  voltage = iVal * 0.0032352941;

  temp = iVal * 0.048875855;

  if(temp <= 10)
  {
    Serial.println("Digitized Value = " + String(iVal) + " is equivalent to a temperature input of  " + String(temp) + " DEG. C, which is too Cold!");
  }
  else if(temp >= 35)
  {
    Serial.println("Digitized Value = " + String(iVal) + " is equivalent to a temperature input of  " + String(temp) + " DEG. C, which is too Hot!");
  }
  else if(temp >= 30)
  {
    Serial.println("Digitized Value = " + String(iVal) + " is equivalent to a temperature input of  " + String(temp) + " DEG. C, which is Hot");
  }
  else if(temp >= 25)
  {
    Serial.println("Digitized Value = " + String(iVal) + " is equivalent to a temperature input of  " + String(temp) + " DEG. C, which is Perfect");
  }
  else if(temp >= 15)
  {
    Serial.println("Digitized Value = " + String(iVal) + " is equivalent to a temperature input of  " + String(temp) + " DEG. C, which is Warm");
  }
  else if(temp >= 10)
  {
    Serial.println("Digitized Value = " + String(iVal) + " is equivalent to a temperature input of  " + String(temp) + " DEG. C, which is Cool");
  }
  
 
  //print value to the USB port 
  Serial.println("Digitized Value = " + String(iVal) + " is equivalent to Analog Voltage " + String(voltage));

  //Serial.println("Digitized Value = " + String(iVal) + " is equivalent to a temperature input of  " + String(voltage) + "DEG. C,");

 
  // wait 0.5 seconds (500 ms) 
  delay(500); 
} 