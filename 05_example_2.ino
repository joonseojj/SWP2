#define PIN_LED 7


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(9600);

  digitalWrite(PIN_LED,0);
  delay(1000);
  digitalWrite(PIN_LED,1);
  
  for(int i=1;i<=5;i++)
  {
    delay(100);
    digitalWrite(PIN_LED,0);
    delay(100);
    digitalWrite(PIN_LED,1);
  }  

  while(1) {}
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
}