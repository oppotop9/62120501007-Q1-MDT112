void setup()
{
Serial.begin(9600);
pinMode(2,INPUT_PULLUP);
pinMode(3,0);//3,4,5,6,7,9,10,11,12,13
pinMode(4,0);
pinMode(5,0);
pinMode(6,0);
pinMode(7,0);
pinMode(9,0);
pinMode(10,0);
pinMode(11,0);
pinMode(12,0);
pinMode(13,0);
tone(8,200,500);
delay(250);
tone(8,400,100);

}
int n =1;
int x = 100;
void loop()
{
if(digitalRead(2)==1){
    digitalWrite(3,1);
delay(x);
digitalWrite(3,0);
digitalWrite(4,1);
delay(x);
digitalWrite(4,0);
digitalWrite(5,1);
delay(x);
digitalWrite(5,0);
digitalWrite(6,1);
delay(x);
digitalWrite(6,0);
digitalWrite(7,1);
delay(x);
digitalWrite(7,0);
digitalWrite(9,1);
delay(x);
digitalWrite(9,0);
digitalWrite(10,1);
delay(x);
digitalWrite(10,0);
digitalWrite(11,1);
delay(x);
digitalWrite(11,0);
digitalWrite(12,1);
delay(x);
digitalWrite(12,0);
digitalWrite(13,1);
delay(x);
digitalWrite(13,0);
digitalWrite(12,1);
delay(x);
digitalWrite(12,0);
digitalWrite(11,1);
delay(x);
digitalWrite(11,0);
digitalWrite(10,1);
delay(x);
digitalWrite(10,0);
digitalWrite(9,1);
delay(x);
digitalWrite(9,0);
digitalWrite(7,1);
delay(x);
digitalWrite(7,0);
digitalWrite(6,1);
delay(x);
digitalWrite(6,0);
digitalWrite(5,1);
delay(x);
digitalWrite(5,0);
digitalWrite(4,1);
delay(x);
digitalWrite(4,0);
delay(x);
}
if(digitalRead(2)==0){
tone(8,400,100);
if(n==1){
    x*2;
    Serial.println("Faster X 2 (Current Speed : X"+String(2)+")");
    n++;
    }
else if(n==2){
    x*2;
    Serial.println("Faster X 2 (Current Speed : X"+String(4)+")");
    n++;
}
else if(n==3){
    x*2;
    Serial.println("Faster X 2 (Current Speed : X"+String(8)+")");
    n++;
}
else if(n>3){
    x*2;
    Serial.println("Faster X 2 (Current Speed : X"+String(n*n)+")");
    n++;
}
digitalWrite(3,1);
delay(x);
digitalWrite(3,0);
digitalWrite(4,1);
delay(x);
digitalWrite(4,0);
digitalWrite(5,1);
delay(x);
digitalWrite(5,0);
digitalWrite(6,1);
delay(x);
digitalWrite(6,0);
digitalWrite(7,1);
delay(x);
digitalWrite(7,0);
digitalWrite(9,1);
delay(x);
digitalWrite(9,0);
digitalWrite(10,1);
delay(x);
digitalWrite(10,0);
digitalWrite(11,1);
delay(x);
digitalWrite(11,0);
digitalWrite(12,1);
delay(x);
digitalWrite(12,0);
digitalWrite(13,1);
delay(x);
digitalWrite(13,0);
digitalWrite(12,1);
delay(x);
digitalWrite(12,0);
digitalWrite(11,1);
delay(x);
digitalWrite(11,0);
digitalWrite(10,1);
delay(x);
digitalWrite(10,0);
digitalWrite(9,1);
delay(x);
digitalWrite(9,0);
digitalWrite(7,1);
delay(x);
digitalWrite(7,0);
digitalWrite(6,1);
delay(x);
digitalWrite(6,0);
digitalWrite(5,1);
delay(x);
digitalWrite(5,0);
digitalWrite(4,1);
delay(x);
digitalWrite(4,0);
delay(x);

}
}