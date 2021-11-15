#define analogPin A0
#define Vcc 5.0
#define ledPin 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue = analogRead(analogPin);
  float voltage = Vcc * analogRead(analogPin)/1024;
  Serial.print("Voltage : ");
  Serial.println(voltage);
  float dutyCycle = voltage;
  dutyCycle = map(dutyCycle, 1.5, 4.0, 20.0, 255.0);
  analogWrite(ledPin, dutyCycle);
  delay(5);
}
