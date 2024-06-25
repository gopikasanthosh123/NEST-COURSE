
const int buzzerpin=9;

void setup() {
  pinMode(buzzerpin,OUTPUT);
}

void loop() {
  tone(buzzerpin,1000);
  delay(1000);
  noTone(buzzerpin);
  delay(1000);
}