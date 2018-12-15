#include <Servo.h>


char var;
Servo mysa;
Servo myse;
Servo mysw;
Servo mysf;

int a=0;
int e=0;
int w=0;
int f=0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  mysa.attach(6);
  mysa.write(a);

  myse.attach(3);
  myse.write(e);
  
  mysw.attach(11);
  mysw.write(w);

  mysf.attach(9);
  mysf.write(f);
}

void loop() {
  // put your main code here, to run repeatedly:
  if((Serial.available())){
    
    var= Serial.read();
    
//---------------------------------------------------------------------
    //arm rotation
           
      if(var=='b')
      {
        if(a>=0&&a<=180){
          a=++a;
          mysa.write(a);
          delay(5);
        }
        else a=180;
      }
      
    
     else if(var=='n')
     {
        
        if(a>=0&&a<=180){
          a=--a;
          mysa.write(a);
          delay(5);
        }
        else a=0;
     }
   
    
//---------------------------------------------------------------------
   
    //elbow rotation
      else if(var=='g')
      {
       
        if(e>=0&&e<=180){
          e=++e;
          myse.write(e);
          delay(5);
        }
        else e=180;
      }
      
   else if(var=='h')
     {
       if(e>=0&&e<=180){
          e=--e;
          myse.write(e);
          delay(5);
        }
        else e=0;
     }
 
  

//---------------------------------------------------------------------
//wrist rotation
      else if(var=='t')
      {
        
        if(w>=0&&w<=180){
          w=++w;
          mysw.write(w);
          delay(5);
        }
        else w=180;
        
      }
      
    else if(var=='y')
     {
        
        if(w>=0&&w<=180){
          w=--w;
          mysw.write(w);
          delay(5);
        }
        else w=0;
     }
   
  

//---------------------------------------------------------------------
   //finger rotation
      else if(var=='a')
      {
        
        if(f>=0&&f<=180){
          f=++f;
          mysf.write(f);
          delay(5);
        }
        else f=180;
      }
      
    else if(var=='s')
     {
       
        if(f>=0&&f<=180){
          f=--f;
          mysf.write(f);
          delay(5);
        }
        else f=0;
        
     }
   
  
 
 
//--------------------------------------------------------------------- 
}


}
