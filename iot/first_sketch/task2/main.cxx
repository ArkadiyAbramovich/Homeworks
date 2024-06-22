void setup() {
for(int i{1}; i <= 10; i++) {
  pinMode(i, OUTPUT);
  digitalWrite(i, HIGH);;
}
}

void loop() {
for(int i{10}; i >=1; i--) {
  digitalWrite(i, LOW);
  delay(500);
}

for(int i{1}; i <=10; i++) {
  digitalWrite(i, HIGH);
  delay(1000);
}
}
