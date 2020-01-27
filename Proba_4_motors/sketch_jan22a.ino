//motor 1
const int pin11 =5; //control motor1
const int pin12 = 6; //control direccio contraria
//motor2
const int pin21 = 2;//control motor2
const int pin22 = 3;//control direccio contraria
//motor3
const int pin31 = 8;//control motor2
const int pin32 = 9;//control direccio contraria
//motor4
const int pin41 = 11;//control motor2
const int pin42 = 12;//control direccio contraria

 
const int vel1 = 7; // pin de la velocitat
const int vel2 = 4; // pin de la velocitat
const int vel3 = 10; // pin de la velocitat
const int vel4 = 13; // pin de la velocitat


int velocitat = 255; //definir valor velocitat

void setup() {
  // put your setup code here, to run once:
  pinMode(pin11,OUTPUT);
  pinMode(pin12,OUTPUT);
  pinMode(pin21,OUTPUT);
  pinMode(pin22,OUTPUT);
  pinMode(pin31,OUTPUT);
  pinMode(pin32,OUTPUT);
  pinMode(pin41,OUTPUT);
  pinMode(pin42,OUTPUT);
  pinMode(vel1,OUTPUT);
  pinMode(vel2,OUTPUT);
  pinMode(vel3,OUTPUT);
  pinMode(vel4,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  accionarMotor(pin11, pin12, vel1, velocitat);
  accionarMotor(pin21, pin22, vel2, velocitat);
  accionarMotor(pin31, pin32, vel3, velocitat);
  accionarMotor(pin41, pin42, vel4, velocitat);
  
}

void accionarMotor(int pin1, int pin2, int vel, int velocitat){
  if(velocitat > 0){
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
  }
  else{
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
  }
   analogWrite(vel,abs(velocitat));
  
}
