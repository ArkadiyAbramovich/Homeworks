void setup() {

for(int i{1}; i <= 10; i++) {
  pinMode(i, OUTPUT);
}

}

void loop() {

for(int i{1}; i <= 10; i++) {
  digitalWrite(i, HIGH);
  digitalWrite(i, LOW);
  delay(1000);
}

for(int i{1}; i <= 10; i++) {
  digitalWrite(i, HIGH);
  digitalWrite(i, LOW);
  delay(500);
}

for(int i{1}; i <= 10; i++) {
  digitalWrite(i, HIGH);
  digitalWrite(i, LOW);
  delay(250);
}

for(int i{1}; i <= 10; i++) {
  digitalWrite(i, HIGH);
  digitalWrite(i, LOW);
  delay(100);
}

}


