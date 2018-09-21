#define ENABLE 5
#define DIRA 3
#define DIRB 4

void setup() {
  // put your setup code here, to run once:
  pinMode(ENABLE,OUTPUT);
  pinMode(DIRA,OUTPUT);
  pinMode(DIRB,OUTPUT);
  Serial.begin(9600);
}

void loop() {
    // put your main code here, to run repeatedly:
    Serial.println("PWM full to slow");
    analogWrite(ENABLE,255); //enable on
    digitalWrite(DIRA,HIGH); //one way
    digitalWrite(DIRB,LOW);
    delay(1000);
    analogWrite(ENABLE,220);
    delay(1000);
    analogWrite(ENABLE,180);
    delay(1000);
    analogWrite(ENABLE,150);
    delay(1000);
    analogWrite(ENABLE,100);
    delay(1000);
    analogWrite(ENABLE,60);
    delay(1000);
    analogWrite(ENABLE,20);
    delay(1000);
    digitalWrite(ENABLE,LOW);
    delay(3000);
  }
