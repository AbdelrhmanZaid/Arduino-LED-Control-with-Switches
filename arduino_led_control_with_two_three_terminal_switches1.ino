// C++ code
//
const int greenl=5;
const int redl=6;
const int greenr=10;
const int redr=9;
const int switchl=2;
const int switchr=11;


void setup()
{
  pinMode(greenl, OUTPUT);
  pinMode(redl, OUTPUT);
  pinMode(greenr, OUTPUT);
  pinMode(redr, OUTPUT);
  pinMode(switchl, INPUT);
  pinMode(switchr, INPUT);
  
}

void loop()
{
  if (digitalRead(2)==HIGH){
    analogWrite(redl,255);
    analogWrite(greenl,40);

  } else {
    analogWrite(redl,0);
    digitalWrite(greenl,LOW);
    
    }
   if (digitalRead(11)==HIGH){
    digitalWrite(redr,255);
    analogWrite(greenr,40);
    
   }else {
   analogWrite(redr,0);
    analogWrite(greenr,0);
    
    }delay(250);}
  
  
  
  
  
  
  
  
  
  
  