void setup() {
  Serial.begin(8192); //I know what this does
}
byte rx_byte = 0;         //No idea what this does really(Same for the rest of the code)

void loop() {
if (Serial.available())
    rx_byte = Serial.read();
}
