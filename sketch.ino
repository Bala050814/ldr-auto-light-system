void setup() {
  pinMode(6,OUTPUT);

}

void loop() {
  int val=analogRead(A0);
  int brightness = map(val, 0, 1023, 0, 255);
  analogWrite(6,brightness);
  delay(100);
  


}
