const int potPin = A0; // 接上電位器中間腳的輸入腳位

void setup() {
  Serial.begin(9600); // 設定與網頁 WebSerial 相同的 baudRate
}

void loop() {
  int potValue = analogRead(potPin); // 讀取電位器的數值 (0 ~ 1023)
  Serial.println(potValue);         // 傳送至網頁端 via WebSerial
  delay(30);                        // 每 30ms 傳一次，避免過載
}
