

int blueLED = 1;
int greenLED = 2;
int redLED = 3;

void setup() {

  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);

}

void loop() {
  
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);  //none
  digitalWrite(redLED, LOW);
  delay(1000);

  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, LOW);  //blue
  digitalWrite(redLED, LOW);              
  delay(1000);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, HIGH); //green
  digitalWrite(redLED, LOW);
  delay(1000);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW); //red
  digitalWrite(redLED, HIGH);
  delay(1000);

  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, LOW);  //violet
  digitalWrite(redLED, HIGH);
  delay(1000);

  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH); //brezovy
  digitalWrite(redLED, LOW);
  delay(1000);

  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, HIGH); //yellow
  digitalWrite(redLED, HIGH);
  delay(1000);

  digitalWrite(blueLED, HIGH);
  digitalWrite(greenLED, HIGH); //white
  digitalWrite(redLED, HIGH);
  delay(1000);

  
}


