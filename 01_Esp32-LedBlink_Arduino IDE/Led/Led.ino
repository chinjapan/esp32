int Led_Num1 = 25;
int Led_Num2 = 26;
void setup() {
  // put your setup code here, to run once:
  pinMode(Led_Num1,OUTPUT);
  pinMode(Led_Num2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(Led_Num1,HIGH);
 digitalWrite(Led_Num2,LOW);
 delay(1000);
 digitalWrite(Led_Num1,LOW);
 digitalWrite(Led_Num2,HIGH);
 delay(1000);
}
