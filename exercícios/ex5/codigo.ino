
const int botao = 3;
const int led = 2;
int Estadobotao=0;


void setup()
 { 
    pinMode(botao, INPUT);
    pinMode(led, OUTPUT);
   
 }
 
 void loop()
 {
   Estadobotao= digitalRead(botao);
   if (Estadobotao ==HIGH){
     digitalWrite (led, LOW);
   }else{
     digitalWrite(led,HIGH);
   }
 }
   
    
