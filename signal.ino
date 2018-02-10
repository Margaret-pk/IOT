/*LED_signal*/
int r=7;
int y=8;
int g=9;
void setup()
{
  pinMode(r,OUTPUT);
  pinMode(y,OUTPUT);
  pinMode(g,OUTPUT);

}  
void loop()
{
digitalWrite(r,HIGH);
delay(1000);
digitalWrite(r,LOW);
delay(1000);
digitalWrite(y,HIGH);
delay(1000);
digitalWrite(y,LOW);
delay(1000);
digitalWrite(g,HIGH);
delay(1000);
digitalWrite(g,LOW);
delay(1000);
exit(2);
}

