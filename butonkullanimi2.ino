void setup()
{
pinMode(2, OUTPUT);//2. portu çıkış yap
pinMode(3, INPUT); //3. portu giriş yap
pinMode(4, INPUT); //4. portu giriş yap
}
void loop()
{
if (digitalRead(3)==1) // Eğer 1. butona basıldı ise
 digitalWrite(2, 1);// 2. porta bağlı LED’i yak
if (digitalRead(4)==1) // Eğer 2. butona basıldı ise
 digitalWrite(2, 0);// 2. porta bağlı LED’i söndür
}
