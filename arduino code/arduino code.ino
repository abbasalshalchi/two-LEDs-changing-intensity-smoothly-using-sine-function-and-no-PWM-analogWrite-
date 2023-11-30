unsigned long time;
int t = 2400; //delay time

void setup() {
pinMode(2,OUTPUT);//red
pinMode(4,OUTPUT);//green
}

void loop() {
  time = millis();
unsigned long count = 0;
while((unsigned long)(millis() - time) < t)
  {
    
      digitalWrite(2,HIGH);
        delay(abs(abs(sin(((count%100)/100.0)*2.0*M_PI)*10.0*2)-20));
      digitalWrite(2,LOW);
        //delay(abs(((count%100)/5)-10.0));
        delay(abs(sin(((count%100)/100.0)*2.0*M_PI)*10.0*2));
        count++;
  }
digitalWrite(2,LOW);
time = millis();
count = 0;
while((unsigned long)(millis() - time) < t)
  {
    
      digitalWrite(4,HIGH);
        delay(abs(abs(sin(((count%100)/100.0)*2.0*M_PI)*10.0*2)-20));
      digitalWrite(4,LOW);
        //delay(abs(((count%100)/5)-10.0));
        delay(abs(sin(((count%100)/100.0)*2.0*M_PI)*10.0*2));
        count++;
  }
digitalWrite(4,LOW);
}
/* old
void loop() {
  time = millis();
unsigned long count = 0;
while((unsigned long)(millis() - time) < 3000)
  {
    
      digitalWrite(2,HIGH);
        delay(abs(abs(sin(((count%100)/100.0)*2.0*M_PI)*10.0*2)-20));
      digitalWrite(2,LOW);
        //delay(abs(((count%100)/5)-10.0));
        delay(abs(sin(((count%100)/100.0)*2.0*M_PI)*10.0*2));
        count++;
  }
digitalWrite(2,LOW);
 //green
digitalWrite(4,HIGH);
delay(t);
digitalWrite(4,LOW);
 //red strong
digitalWrite(2,HIGH);
delay(t);
digitalWrite(2,LOW);
//green
digitalWrite(4,HIGH);
delay(t);
digitalWrite(4,LOW);
  //------------------
  for(int i = 0; i < 4;i++)
  {
  //red weak
time = millis();
while((unsigned long)(millis() - time) < t)
  {
      digitalWrite(2,HIGH);
        delay(1);
      digitalWrite(2,LOW);
        delay(10);
  }
digitalWrite(2,LOW);
 //green
digitalWrite(4,HIGH);
delay(t);
digitalWrite(4,LOW);
 //red strong
digitalWrite(2,HIGH);
delay(t);
digitalWrite(2,LOW);
//green
digitalWrite(4,HIGH);
delay(t);
digitalWrite(4,LOW);
}

//----------------------------------------------
//red weak


}
*/
/*while((time + 1000) > millis())
  {
    if(millis()%2 = 0)
      digitalWrite(2,HIGH);
    else
      digitalWrite(2,LOW);
  }
  */