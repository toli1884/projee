#define SensorSol 10
#define SensorOrta 11
#define SensorSag 12

#define MotorR1 7
#define MotorR2 6
#define MotorRE 9

#define MotorL1 5
#define MotorL2 4
#define MotorLE 3



void setup() {
  pinMode(SensorSol,INPUT);
  pinMode(SensorOrta,INPUT);
  pinMode(SensorSag,INPUT);

  pinMode(MotorR1,OUTPUT);
  pinMode(MotorR2,OUTPUT);
  pinMode(MotorRE,OUTPUT);
  pinMode(MotorL1,OUTPUT);
  pinMode(MotorL2,OUTPUT);
  pinMode(MotorLE,OUTPUT);


}

void loop() {

  if(digitalRead(SenosrSol) == 0 && digitalRead(SensorOrta) == 1 && digitalRead(SensorSag) == 0){
    ileri();
  }

  if(digitalRead(SenosrSol) == 0 && digitalRead(SensorOrta) == 0 && digitalRead(SensorSag) == 1){
    sag();
  }
  if(digitalRead(SenosrSol) == 1 && digitalRead(SensorOrta) == 0 && digitalRead(SensorSag) == 0){
    sol();
  }

  if(digitalRead(SenosrSol) == 0 && digitalRead(SensorOrta) == 0 && digitalRead(SensorSag) == 0){
    dur();



 



}


void ileri(){

  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  digitalWrite(MotorRE,HIGH);

  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  digitalWrite(MotorLE,HIGH);


}

void sag(){

  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  digitalWrite(MotorRE,LOW);

  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  digitalWrite(MotorLE,HIGH);

}void sol(){

  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  digitalWrite(MotorRE,HIGH);

  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  digitalWrite(MotorLE,LOW);

  void dur(){

  digitalWrite(MotorR1,HIGH);
  digitalWrite(MotorR2,LOW);
  digitalWrite(MotorRE,LOW);

  digitalWrite(MotorL1,HIGH);
  digitalWrite(MotorL2,LOW);
  digitalWrite(MotorLE,LOW);