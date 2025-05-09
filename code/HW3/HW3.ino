const int potPin = 34;    // the number of the potentiometer pin
const int ledPin =  5;    // the number of the LED pin

// variable for storing the potentiometer value
int potValue = 0;

void setup() {
  Serial.begin(115200);
  // initialize the potentiometer pin as an input
  pinMode(potPin, INPUT);  
  // initialize the LED pin as an input 
  pinMode(ledPin, OUTPUT);
  delay(1000);
}

void loop() {
  // reading potentiometer value
  potValue = analogRead(potPin);
  // mapping the pot Value to LED Value
  int ledValue = map(potValue, 0, 4095, 0, 255);
  Serial.println(potValue);
  // adjust LED Brightness
  analogWrite(ledPin, ledValue);
  delay(500);
}