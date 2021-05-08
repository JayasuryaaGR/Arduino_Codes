const int pin = 13;
const int in = A0;
int an;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
  pinMode(in, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);
  //delay(500);
  //digitalWrite(pin, LOW);
  //delay(500);
  an = analogRead(in);
  Serial.println(an);
}
