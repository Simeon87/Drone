int TIME = 0;
int A_one = 9;
int A_two = 8;
int B_one = 7;
int B_two = 6;
int PULSE = 1400;

void setup() {
  Serial.begin(115200);
  pinMode(A_one, OUTPUT);
  pinMode(A_two, OUTPUT);
  for(TIME=0; TIME<500; TIME+=1){
    digitalWrite(A_one, HIGH);
    digitalWrite(A_two, HIGH);
    delayMicroseconds(1100);
    digitalWrite(A_one, LOW);
    digitalWrite(A_two, LOW);
    delay(5);
  }
}

void loop() {

 
  for(PULSE=1000; PULSE<=2500; PULSE+=1){
    Serial.println(PULSE);
    digitalWrite(A_one, HIGH);
    digitalWrite(A_two, HIGH);
    delayMicroseconds(PULSE);
    digitalWrite(A_one, LOW);
    digitalWrite(A_two, LOW);
    delay(20);
  }
if(PULSE == 2500)
{
  while(1) {
    Serial.println(PULSE);
    digitalWrite(A_one, HIGH);
    digitalWrite(A_two, HIGH);
    delayMicroseconds(PULSE);
    digitalWrite(A_one, LOW);
    digitalWrite(A_two, LOW);
    delay(20);
  }
}
  
}
