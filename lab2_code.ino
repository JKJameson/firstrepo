int PIN = 2;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  pinMode(PIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int knobValue = analogRead(A0);
   // print out the value you read:
  Serial.println(knobValue);

  // turn the LED on if potentiometer is > 400
  if (knobValue > 400) {
    digitalWrite(PIN, HIGH);
  } else {
    digitalWrite(PIN, LOW);
  }

  // delay to reduce energy usage
  delay(50);

}
