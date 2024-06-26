const int temp=A0;
const int buzzpin=8;
const float tempth=8.0;
void setup() {
  Serial.begin(9600);
  pinMode(buzzpin,OUTPUT);
  digitalWrite(buzzpin,LOW);
}

void loop() {
  int sensorvalue=analogRead(temp);
  float temps=sensorvalue*(3.0/1023.0)*10;
  Serial.print("temperature");
  Serial.print(temps);
  Serial.println("c%");
  if (temps>tempth){
    digitalWrite(buzzpin,HIGH);
  }
  else{
    digitalWrite(buzzpin,LOW);
  }
  delay(1000);
}