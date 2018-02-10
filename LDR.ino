/*LDR*/
int LED=9;
int LDR=A0;
void setup()
{
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(LDR, INPUT);
}
void loop()
{
  int ldrstatus= analogRead(A0);
  Serial.println(ldrstatus);
  
    
  
}

