#define Rojo PB1
#define Amarillo PB10
#define Verde PB11

#define BUTTON PB7
#define BUTTON2 PB8

#define Buzzer PB9
int estadoSemaforo;
//0=Verde
//1=Amarillo
//2=Rojo
bool pulsar= false;

void setup() {
  // put your setup code here, to run once:
  pinMode(Rojo, OUTPUT);
  pinMode(Amarillo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode (Buzzer, OUTPUT);

  pinMode(BUTTON,INPUT_PULLUP);
  pinMode(BUTTON2,INPUT_PULLUP);

  estadoSemaforo=0;

}

void loop() {
  // put your main code here, to run repeatedly:

    
      if (digitalRead(BUTTON)==HIGH) {
      
          switch (estadoSemaforo) {

        case 0:
              digitalWrite(Rojo, HIGH);
              break;
        case 1:
              digitalWrite(Rojo, HIGH);
              digitalWrite(Amarillo, HIGH);
              break;
        case 2:
              digitalWrite(Rojo, LOW);
              digitalWrite(Amarillo, LOW);
              digitalWrite(Verde, HIGH);
              
             
      
      }

      }

      else {
        
          digitalWrite(Rojo, HIGH);   // turn the LED on (HIGH is the voltage level)
          digitalWrite(Amarillo, LOW);   // turn the LED on (HIGH is the voltage level)
          digitalWrite(Verde, LOW);   // turn the LED on (HIGH is the voltage level)
        }


}
