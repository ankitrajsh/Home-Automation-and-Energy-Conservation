// Pin Definitions
const int lightPin = 13;  // Pin to control the light bulb relay
const int fanPin = 10;    // Pin to control the fan relay
const int irPin = 9;      // Pin connected to IR sensor
const int pirPin = 8;     // Pin connected to PIR sensor
const int ldrPin = A0;    // Analog pin connected to LDR
const int tempPin = A1;   // Analog pin connected to LM35

// Thresholds
const int tempThreshold = 30;  // Temperature threshold in degrees Celsius
const int ldrThreshold = 500;  // LDR threshold value (adjust based on your environment)

// Variables
int irState = 0;           // Variable to store IR sensor state
int pirState = 0;          // Variable to store PIR sensor state
int ldrValue = 0;          // Variable to store LDR value
int tempValue = 0;         // Variable to store temperature value
float temperatureC = 0;    // Variable to store calculated temperature in Celsius

void setup() {
  // Initialize digital pins as output
  pinMode(lightPin, OUTPUT);
  pinMode(fanPin, OUTPUT);

  // Initialize digital pins as input
  pinMode(irPin, INPUT);
  pinMode(pirPin, INPUT);

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read sensor values
  irState = digitalRead(irPin);
  pirState = digitalRead(pirPin);
  ldrValue = analogRead(ldrPin);
  tempValue = analogRead(tempPin);

  // Calculate temperature in Celsius
  temperatureC = tempValue * (5.0 / 1023.0) * 100.0;

  // Debugging: Print sensor values to Serial Monitor
  Serial.print("IR State: ");
  Serial.println(irState);
  Serial.print("PIR State: ");
  Serial.println(pirState);
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" C");

  // Control light based on LDR value
  if (ldrValue < ldrThreshold) {
    digitalWrite(lightPin, HIGH); // Turn on light
  } else {
    digitalWrite(lightPin, LOW);  // Turn off light
  }

  // Control fan based on temperature threshold
  if (temperatureC > tempThreshold) {
    digitalWrite(fanPin, HIGH);  // Turn on fan
  } else {
    digitalWrite(fanPin, LOW);   // Turn off fan
  }

  // Add additional logic for IR and PIR sensors if needed
  // For example, you could add conditions to control the light or fan based on IR and PIR sensors
  // if (irState == HIGH) {
  //    Do something when IR sensor is triggered
  // }
  // if (pirState == HIGH) {
  //    Do something when PIR sensor is triggered
  // }

  // Delay to stabilize sensor readings
  delay(1000);  // Delay in milliseconds
}
