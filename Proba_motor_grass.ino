//motor 1
const int pin11 =5; //control motor1
const int pin21 = 6; //control direccio contraria
//moto2
const int pin12 = 2;//control motor2
const int pin22 = 3;//control direccio contraria
 
const int vel1 = 7; // pin de la velocitat
const int vel2 = 4; // pin de la velocitat


int velocitat = 255; //definir valor velocitat

void setup() {
  // put your setup code here, to run once:
  pinMode(pin11,OUTPUT);
  pinMode(pin21,OUTPUT);
  pinMode(pin12,OUTPUT);
  pinMode(pin22,OUTPUT);
  pinMode(vel1,OUTPUT);
  pinMode(vel2,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  accionarMotor(pin11, pin21, vel1, velocitat);
  accionarMotor(pin12, pin22, vel2, velocitat);
  
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
