
const int buttonPin = 4;    
const int ledPin =  8;     
int buzzer = 6;

//int buttoPushCounter = 0;
//int buttonState = 0;         
//int lastButtonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(buzzer,OUTPUT);
  
  Serial.print(9600);
}

void loop() {

 
