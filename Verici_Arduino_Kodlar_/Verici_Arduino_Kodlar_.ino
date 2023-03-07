// C++ code
//
//VERİCİ ARDUİNO KODLARI
int pot=A0;
int deger=0;
int deger1=0;
void setup()
{
  
  Serial.begin(9600);
  
}

void loop()
{
  deger=analogRead(pot);
  deger1=map(deger,0,1023,0,90);
  Serial.write(deger1);
  deger1=0;
}
