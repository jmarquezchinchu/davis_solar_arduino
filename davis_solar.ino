
int SOLAR = A1;
int REF_3V3 = A0;


void setup() {
  Serial.begin(9600);
  pinMode(SOLAR, INPUT);
  pinMode(REF_3V3, INPUT);
analogReference(EXTERNAL);
}

void loop() {

  int refLevel = analogRead(REF_3V3);
  int radsolar = analogRead(SOLAR);

  float outputSolar = 3.30 / refLevel * radsolar;

  Serial.print(outputSolar * 1000.00);
Serial.print(" mV  ");

  Serial.print((int)(outputSolar * 1000.00 / 1.67));
Serial.println(" W/m2");
  delay(10000);

}
