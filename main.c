int mtra=6;
int mtrb=7;
int mtrx=8;
int mtry=9;
int ir1=3;
int ir2=12;


void setup() {
  // put your setup code here, to run once:
  pinMode(mtra,OUTPUT);
  pinMode(mtrb,OUTPUT);
  pinMode(mtrx,OUTPUT);
  pinMode(mtry,OUTPUT);
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(4,OUTPUT);
  digitalWrite(4,HIGH);//writing this here as setup runs only once and we will not change it

}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(ir1)==HIGH&&digitalRead(ir2)==HIGH){
  motor1clockwise();
  motor2clockwise();
  }
  else if((digitalRead(ir1)==LOW)&&(digitalRead(ir2)==HIGH)){
   digitalWrite(mtra,HIGH);
  digitalWrite(mtrb,HIGH);
  motor2clockwise();
  }
  else if((digitalRead(ir2)==LOW)&&(digitalRead(ir1)==HIGH)){
     digitalWrite(mtrx,HIGH);
  digitalWrite(mtry,HIGH);
   motor1clockwise();
  }
  else{
    digitalWrite(mtra,HIGH);
  digitalWrite(mtrb,HIGH);
  digitalWrite(mtrx,HIGH);
  digitalWrite(mtry,HIGH);
  }
  

 
}
void motor1clockwise(){
 digitalWrite(mtra,HIGH);
  digitalWrite(mtrb,LOW);
}
void motor1anticlockwise(){
   digitalWrite(mtra,LOW);
  digitalWrite(mtrb,HIGH);
  
}
void motor2anticlockwise(){
  digitalWrite(mtrx,LOW);
  digitalWrite(mtry,HIGH);
  
}
void motor2clockwise(){
  digitalWrite(mtrx,HIGH);
  digitalWrite(mtry,LOW);
  
}
