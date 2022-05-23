void setup() {
  
  analogReference(INTERNAL);
  Serial.begin(9600);
  
}

void loop() {
  
  Serial.print("A0: ");
  Serial.print(analogRead(0));
  Serial.print(" | ");
  Serial.print("A1: ");
  Serial.print(analogRead(1));
  Serial.print(" | ");
  Serial.print("A2: ");
  Serial.print(analogRead(2));
  Serial.print(" | ");
  Serial.print("A3: ");
  Serial.print(analogRead(3));
  Serial.println();
  
  delay(200);
  
}
