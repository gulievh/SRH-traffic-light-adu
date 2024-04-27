
const int redPin = 10;
const int yellowPin = 9;
const int greenPin = 8;

const int redDuration = 5000;    // 5 seconds
const int yellowDuration = 2000; // 2 seconds
const int greenDuration = 5000;  // 5 seconds

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  delay(redDuration);
  digitalWrite(redPin, LOW);

  digitalWrite(yellowPin, HIGH);
  delay(yellowDuration);
  digitalWrite(yellowPin, LOW);

  digitalWrite(greenPin, HIGH);
  delay(greenDuration);
  digitalWrite(greenPin, LOW);
}
