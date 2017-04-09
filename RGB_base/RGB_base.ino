#define redPin 9
#define greenPin 10
#define bluePin 11

#define pot A5

// use this function to set a colour directly on the RGB led
// setRGB(255, 0, 0); -> red
// setRGB(0, 255, 0); -> green
// setRGB(0, 0, 255); -> blue
// setRGB(255, 0, 255); -> purple, etc.
void setRGB(int redVal, int greenVal, int blueVal) {
  analogWrite(redPin, redVal);
  analogWrite(redPin, redVal);
  analogWrite(redPin, redVal);
}

void setup() {
  // set each colour-pin as an output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  // set the physical input as such
  pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
