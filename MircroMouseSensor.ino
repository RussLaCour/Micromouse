#define sensor A0 //Sharp IR GP2Y0A51SK0F (2-15cm, analog)


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Sharp IR Sensor");

}

void loop() {
  // put your main code here, to run repeatedly:

  float volts = analogRead(sensor) * 0.0048828125;
  int distance = 13*pow(volts, -1);

  if (distance <= 15)
  {
    Serial.println(distance);
  }

}
