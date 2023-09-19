#define  PIN_LED 7
unsigned int count;


void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = 0;
  digitalWrite(PIN_LED, OUTPUT); 

}

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  digitalWrite(PIN_LED, 1);
  Serial.println(++count);

  for (int i = 0; i <5; i++) {
    digitalWrite(PIN_LED, 1);
    delay(500);
    digitalWrite(PIN_LED, 0);
    delay(500);
    Serial.println(++count);
  }
  while(1){
    digitalWrite(PIN_LED, 1);
    Serial.println(++count);
    delay(1000); // wait 1000 miliseconds.
  }

}
