void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
// RAM arduino - 2KB
bool staLed1 = 0, staLed2 = 0;  // 1 bit, int 2 byte = 16 bit
bool isPress1 = 0, isPress2 = 0;

void loop() {
  unsigned long time = micros();
  // xuLyPhim();
  Serial.println(time);
  delay(300);
}

void xuLyPhim() {
  if (digitalRead(2) == 0) {
    if (isPress1 == 0) {
      delay(20);
      if (digitalRead(2) == 0) {
        staLed1 = !staLed1;
        digitalWrite(12, staLed1);
        isPress1 = 1;
      }
    }
  } else {
    isPress1 = 0;
  }

  if (digitalRead(3) == 0) {
    if (isPress2 == 0) {
      delay(20);
      if (digitalRead(3) == 0) {
        staLed1 = !staLed1;
        digitalWrite(13, staLed1);
        isPress2 = 1;
      }
    }
  } else {
    isPress2 = 0;
  }
}