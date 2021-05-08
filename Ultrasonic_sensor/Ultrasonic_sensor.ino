const int trig = 7;
const int echo = 8;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  int timee;  // time duration comes in micro seconds
  int distance;
  int speedd = 0.0343;  // speed of sound = 343 m/s
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  timee = pulseIn(echo, HIGH);
  distance = (timee * 0.0343) / 2; // Speed of sound wave divided by 2
  Serial.print("Distance:");
  Serial.println(distance);
  //delay(1000);
}
