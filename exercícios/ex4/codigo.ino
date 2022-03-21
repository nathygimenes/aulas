const int botao = 3;
const int led = 2;
int botaoEstado= 0;

  
 void setup()
 {
  	pinMode(botao, INPUT);
    pinMode(led, OUTPUT);
    
 }
 
 void loop()
 {
    botaoEstado= digitalRead(botao);
   if (botaoEstado == HIGH){
   digitalWrite(led, LOW);
 } else {
   digitalWrite(led,HIGH);
 }
}
