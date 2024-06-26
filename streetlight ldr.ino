int led=5;
float ldr=6;
float th=0.0;
float ldrstate=0.0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(ldr,INPUT);
}

void loop() {
  ldrstate=digitalRead(ldr);
  Serial.println(ldrstate);
  if(ldrstate>=th)
  {
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);  
  }
}
