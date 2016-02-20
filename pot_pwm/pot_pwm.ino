//////////////////////////////////////////////////////////////////
//©2011 bildr
//Released under the MIT License - Please reuse change and share
//Simple code to output a PWM sine wave signal on pin 9
//////////////////////////////////////////////////////////////////

#define fadePin 3


void setup(){
  pinMode(fadePin, OUTPUT);
  Serial.begin(9600); 
  //analogReference(EXTERNAL);
}

void loop(){
  
  int sinOut = analogRead(A1); 
  int sin2 = constrain(sinOut*.28-20,0,255);
  analogWrite(fadePin, sin2);
  //Serial.println(sinOut);
  //Serial.println(sin2);
  float sensorValue1 = analogRead(A0);
  //Serial.println(sensorValue1*(4.096/1023));
  delay(100);



}
