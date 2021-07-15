

// We make the output pins variables so that we can easily change their values
const int OutputPin1 = A0;
const int OutputPin2 = A1;


const int DelayMs = 250;

// Put your setup code here, to run once
void setup()
{
  // Init the serial port at 9600 baud rate
  Serial.begin(9600);
 
  // Make the pins output pins
  // Otherwise, they would be analog inputs by default
  pinMode(OutputPin1, OUTPUT);
  pinMode(OutputPin2, OUTPUT);
}

// Put your main code here, to run repeatedly
void loop()
{
  // Write a one to the first output pin
  // The output pin will turn on, and output 5V
  digitalWrite(OutputPin1, 1);

  // Write a zero to the second output pin
  // The output pin will turn off, and output 0V
  digitalWrite(OutputPin2, 0);

  // Let the user know that we are turning on the output pin
  Serial.println("Writing 1 and 0");
 
  // Delay for DelayMs milliseconds
  delay(DelayMs);

  // Write a zero to the first output pin
  // The output pin will turn off, and output 0V
  digitalWrite(OutputPin1, 0);

  // Write a one to the second output pin
  // The output pin will turn on, and output 5V
  digitalWrite(OutputPin2, 1);

  Serial.println("Writing 0 and 1");
 
  // Delay for DelayMs milliseconds
  delay(DelayMs);
}
