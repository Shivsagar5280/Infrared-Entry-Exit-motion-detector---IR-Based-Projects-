bool State=true;

int Input=3;

int Led=4;

int Fan=5;

void setup(){

pinMode(Input,INPUT);

pinMode(Led,OUTPUT);

pinMode(Fan,OUTPUT);

}

void loop(){

if(digitalRead(Input)==HIGH && State){

digitalWrite(Led,HIGH);

digitalWrite(Fan,HIGH);

State=false;

}
else 
if(digitalRead(Input)==LOW && !(State)){

digitalWrite(Led,LOW);

digitalWrite(Fan,LOW);

State=true;

   }
   

}
