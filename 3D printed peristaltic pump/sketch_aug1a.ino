int motor1pin1 = 4;
int motor1pin2 = 3;
int motor1speed = 2;

void setup() {
  // put your setup code here, to run once:
pinMode(motor1pin1, OUTPUT);
pinMode(motor1pin2, OUTPUT);
pinMode(motor1speed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(motor1pin1, LOW);
digitalWrite(motor1pin2, HIGH);

analogWrite(motor1speed, 130);
delay(3000);

}
