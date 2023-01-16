int pot = A2;
int led = 11;

int potValue;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(pot);
  Serial.println(potValue);
  delay(10);
}
