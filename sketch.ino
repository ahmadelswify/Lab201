https://wokwi.com/projects/345981254779273812

void setup() {
  // put your setup code here, to run once:

  pinMode(A0, INPUT);

  pinMode(13, OUTPUT);

  Serial.begin(9600);

}



void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  Serial.println(value);

  digitalWrite(13, HIGH);
  delay(value);
  digitalWrite(13, LOW);
  delay(value);


}
