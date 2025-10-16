const int ledRed = 16;    // GPIO16
const int ledYellow = 17;  // GPIO17
const int ledGreen = 18;   // GPIO18

void ledChange(int valLedR, int valLedY, int valLedG)
{
  digitalWrite(ledRed, valLedR);
  digitalWrite(ledYellow, valLedY);
  digitalWrite(ledGreen, valLedG);
}

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // Rosu - Stop
  ledChange(HIGH, LOW, LOW);
  Serial.println("ROSU!");
  delay(10000);//10 secunde
  
  // Galben - Pregatire
  ledChange(LOW, HIGH, LOW);
  Serial.println("GALBEN! - Pregatire");
  delay(5000);//5 secunde
  
  // Verde - Pornire
  ledChange(LOW, LOW, HIGH);
  Serial.println("VERDE!");
  delay(15000);//15 secunde
  
  // Galben - Avertizare
  ledChange(LOW, HIGH, LOW);
  Serial.println("GALBEN! - Avertizare");
  delay(3000);//3 secunde
}