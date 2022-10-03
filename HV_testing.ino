void setup() {
  pinMode(3, OUTPUT); //pair 1
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT); //positive, pair 1
  pinMode(10, OUTPUT); // negative, pair 2

}

void loop() {
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(6,LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(500);



  

}
