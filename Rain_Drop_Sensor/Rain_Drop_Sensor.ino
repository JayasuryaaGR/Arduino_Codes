const int out = 2;
const int dig_in =11;
const int an_in = A0;

void setup() {
  pinMode(dig_in, INPUT);
  pinMode(out, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print(digitalRead(an_in));
  if (analogRead(an_in) <= 500){
    digitalWrite(out, HIGH);
    Serial.println("Rain is in the field");
  }
  else {
    digitalWrite(out, LOW);
  }
  delay(5000);
}
