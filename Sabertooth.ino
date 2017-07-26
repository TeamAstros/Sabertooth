byte a=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial2.begin(9600);
analogWrite(6,0);

}

void loop() {

//STANDARD SIMPLIFIED SERIAL MODE

  if(Serial.available())
  {
    Serial2.write(Serial.parseInt());
    Serial.parseInt();// GARBAGE REMOVAL!
  }

 /* Serial2.write(127);
  delay(2000);
  Serial2.write(255);
  delay(2000);
  Serial2.write(64);
  delay(2000);
  Serial2.write(192);
  delay(2000);
  Serial2.write(1);
  Serial2.write(128);
  delay(2000);
  Serial2.write(0);
  delay(2000);*/
}
