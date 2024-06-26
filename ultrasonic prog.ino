const int trigPin = 12;
const int echoPin = 13;
long duration;
int distanceCm;
void setup() {
  Serial.begin(9600);
// Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;

Serial.print("Distance in cm: ");
Serial.println(distanceCm);
delay(1000);
}