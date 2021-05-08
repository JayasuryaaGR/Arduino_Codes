const int pin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = digitalRead(pin);
  Serial.println(a);
  delay(500);
}
