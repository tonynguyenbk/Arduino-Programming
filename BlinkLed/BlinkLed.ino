void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    nhapNhay();
  }
  for (int i = 0; i < 3; i++) {
    sangDanVaTatDan();
  }
  for (int i = 0; i < 3; i++) {
    sangXenKe();
  }
  for (int i = 0; i < 3; i++) {
    sangDon();
  }
}

void nhapNhay() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(i, 1);
  }
  delay(200);
  for (int i = 0; i < 8; i++) {
    digitalWrite(i, 0);
  }
  delay(200);
}

void sangDanVaTatDan() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(i, 1);
    delay(100);
  }
  for (int i = 0; i < 8; i++) {
    digitalWrite(7 - i, 0);
    delay(100);
  }
}

void sangXenKe() {
  for (int i = 0; i < 8; i += 2) {
    digitalWrite(i, 1);
    digitalWrite(i + 1, 0);
  }
  delay(200);
  for (int i = 0; i < 8; i += 2) {
    digitalWrite(i, 0);
    digitalWrite(i + 1, 1);
  }
  delay(200);
}

void sangDon() {
  for (int i = 0; i <= 7; i++) {
    for (int j = 7; j >= i; j--) {
      if (j != 7) digitalWrite(j + 1, 0);
      digitalWrite(j, 1);
      delay(100);
    }
  }
}
