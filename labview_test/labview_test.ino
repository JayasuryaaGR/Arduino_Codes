const int out = 11;
char ser;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(out, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0){
    ser = Serial.read();
    if (ser == '0')
    digitalWrite(out, LOW);

    if (ser == '1')
    digitalWrite(out, HIGH);
  }

}
