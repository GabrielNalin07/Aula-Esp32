

//---------------------------------tarefa 1------------------------------------------

// #include <Arduino.h>

// #define LED 4
// #define PINBOTAO 21

// int estadoBAnt = 1; 
// bool estadoLED = 0;

// void setup() {
//   pinMode(LED, OUTPUT);
//   pinMode(PINBOTAO, INPUT_PULLUP);
// }

// void loop() {
//   int estadoBAtual = digitalRead(PINBOTAO);

 
//   if (estadoBAnt == 1 && estadoBAtual == 0) {
//     estadoLED = !estadoLED;            
//     digitalWrite(LED, estadoLED);      
//     delay(50);                         
//   }

//   estadoBAnt = estadoBAtual;           
// }

//---------------------------------tarefa 2------------------------------------------------

// #include <Arduino.h>
// #include <Bounce2.h>

// Bounce = botao = Bounce();

// #define led 4
// #define pinBotao 21
// bool estadoAnteriorB = 0;
// int contagem = 0;
// bool estadoAtualB;
// bool estadoLed = 1;



// void setup() {
//   pinMode(led, OUTPUT);
//   botao.attach(pinBotao, INPUT_PULLUP);
//   Serial.begin(115200);

// }

// void loop() {

  
//   estadoAtualB = digitalRead(pinBotao);


//   if(estadoAnteriorB == 1 && estadoAtualB == 0){ 
//     contagem = contagem + 1;
//     Serial.println(contagem);
//     estadoLed=!estadoLed;
//   }
    

//   if(estadoLed == 0){
//     digitalWrite(led, HIGH);
//   } else {
//     digitalWrite(led, LOW);

//   }

//   estadoAnteriorB = estadoAtualB;
// }

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
// #include <Bounce2.h>
// #define Led 4
// #define pinbotao 23 

// Bounce debouncer = Bounce();
// bool estadoLed = false;

// void setup() {
// pinMode (Led, OUTPUT);
// pinMode (pinbotao, INPUT_PULLUP);

// debouncer.attach(pinbotao);
// debouncer.interval(50);

// digitalWrite(Led, LOW);
// }

// void loop() {
// debouncer.update();
// if (debouncer.fell()) {
//   estadoLed = !estadoLed;
//   digitalWrite(Led, estadoLed);
// }

// }
//-------------------------------------------------------tarefa 2---------------------------------------------------------------------

// #include <Arduino.h>
// #include <Bounce2.h>

// #define LED 4
// #define PINBOTAO 23 

// Bounce debouncer = Bounce();
// bool estadoLED = false;
// bool Clique = false; 

// void setup() {
//   pinMode(LED, OUTPUT);
//   pinMode(PINBOTAO, INPUT_PULLUP);

//   debouncer.attach(PINBOTAO);
//   debouncer.interval(50); 

//   digitalWrite(LED, estadoLED);
// }

// void loop() {
//   debouncer.update();

  
//   if (debouncer.rose()) {
//     Clique = false;
//   }

  
//   if (debouncer.read() == LOW) {
    
//     if (debouncer.currentDuration() >= 2000 && !Clique) {
//       estadoLED = !estadoLED;
//       digitalWrite(LED, estadoLED);
//       Clique = true; 
//     }
//   }
// }
 //-----------------------------------------------------Tarefa 3---------------------------------------------------------------------

//  #include <Arduino.h>
// #include <Bounce2.h>
// #define LED 4
// #define PINBOTAO 23 

// Bounce debouncer = Bounce();

// bool estadoLED = false;
// bool Pisca = false;
// bool acionou = false;

// unsigned long Anterior = 0;
// const long intervalo = 250; 

// void setup() {
//   pinMode(LED, OUTPUT);
//   pinMode(PINBOTAO, INPUT_PULLUP);

//   debouncer.attach(PINBOTAO);
//   debouncer.interval(50);

//   digitalWrite(LED, estadoLED);
// }

// void loop() {
//   debouncer.update();


//   if (debouncer.fell()) {
//     acionou = false;
//   }

  
//   if (debouncer.read() == LOW && !acionou) {
//     if (debouncer.currentDuration() >= 2000) {
//       Pisca = true;      
//       acionou = true;   
//     }
//   }

//   if (debouncer.rose()) {
    
//     if (!acionou) {
//       if (Pisca) {
        
//         Pisca = false;
//         estadoLED = false;
//       } else {
       
//         estadoLED = !estadoLED;
//       }
//       digitalWrite(LED, estadoLED);
//     }
//   }

 
//   if (Pisca) {
//     unsigned long tempoAtual = millis();
//     if (tempoAtual - Anterior >= intervalo) {
//       Anterior = tempoAtual;
//       estadoLED = !estadoLED;
//       digitalWrite(LED, estadoLED);
//     }
//   }
// }
  

//==================Tarefa 1 - Aula 05/10===================================================================


// #include <Arduino.h>
// #include <Bounce2.h>

// #define LED1 4
// #define LED2 21
// #define PINBOTAO 23 

// Bounce debouncer = Bounce();

// bool estadoLED = false;
// bool Pisca = false;
// bool acionou = false;

// unsigned long Anterior = 0;
// const long intervalo = 250; 

// void setup() {
//   pinMode(LED1, OUTPUT);
//   pinMode(LED2, OUTPUT);
//   pinMode(PINBOTAO, INPUT_PULLUP);

//   debouncer.attach(PINBOTAO);
//   debouncer.interval(50);

  
//   digitalWrite(LED1, LOW);
//   digitalWrite(LED2, LOW);
// }

// void loop() {
//   debouncer.update();

//   if (debouncer.fell()) {
//     acionou = false;
//   }

 
//   if (debouncer.read() == LOW && !acionou) {
//     if (debouncer.currentDuration() >= 2000) {
//       Pisca = true;       
//       acionou = true;    
//     }
//   }


//   if (debouncer.rose()) {
//     if (!acionou) {
//       if (Pisca) {
       
//         Pisca = false;
//         estadoLED = false;
//         digitalWrite(LED1, LOW);
//         digitalWrite(LED2, LOW);
//       } else {
        
//         estadoLED = !estadoLED;
//         digitalWrite(LED1, estadoLED);
//         digitalWrite(LED2, LOW);
//       }
//     }
//   }

  
//   if (Pisca) {
//     unsigned long tempoAtual = millis();
//     if (tempoAtual - Anterior >= intervalo) {
//       Anterior = tempoAtual;
//       estadoLED = !estadoLED; 

      
//       digitalWrite(LED1, estadoLED);
//       digitalWrite(LED2, !estadoLED);
//     }
//   }
// }

//----------------------------------------Tarefa 2----------------------------------------------------------------------------

// #include <Arduino.h>

// #define LED1 4  
// #define LED2 5  


// bool estadoLED1 = false;
// bool estadoLED2 = false;


// unsigned long tempoAnteriorLED1 = 0;
// unsigned long tempoAnteriorLED2 = 0;


// const long intervaloLED1 = 500;  
// const long intervaloLED2 = 2000; 

// void setup() {
//   pinMode(LED1, OUTPUT);
//   pinMode(LED2, OUTPUT);

  
//   digitalWrite(LED1, LOW);
//   digitalWrite(LED2, LOW);
// }

// void loop() {
//   unsigned long tempoAtual = millis();

  
//   if (tempoAtual - tempoAnteriorLED1 >= intervaloLED1) {
//     tempoAnteriorLED1 = tempoAtual; 
//     estadoLED1 = !estadoLED1;      
//     digitalWrite(LED1, estadoLED1);
//   }

 
//   if (tempoAtual - tempoAnteriorLED2 >= intervaloLED2) {
//     tempoAnteriorLED2 = tempoAtual; 
//     estadoLED2 = !estadoLED2;      
//     digitalWrite(LED2, estadoLED2);
//   }
// }

//--------------------------------------- tarefa 3-----------------------------------------------------------------------------

#include <Arduino.h>

unsigned long tempoAnterior = 0;
const long intervalo = 2000; 

void setup() {
  Serial.begin(115200); 
}

void loop() {
  unsigned long tempoAtual = millis();

  
  if (tempoAtual - tempoAnterior >= intervalo) {
    tempoAnterior = tempoAtual; 
    Serial.println("Gabriel Nalin");
  }
}

//------------------------------------------tarefa 4----------------------------------------------------------------------------

// #include <Arduino.h>
// #include <Bounce2.h>

// #define LED 4
// #define PINBOTAO 23 

// Bounce debouncer = Bounce();

// bool estadoLED = false;
// unsigned long tempoInicio = 0;
// const long tempoAceso = 3000; 

// void setup() {
//   pinMode(LED, OUTPUT);
//   pinMode(PINBOTAO, INPUT_PULLUP);

//   debouncer.attach(PINBOTAO);
//   debouncer.interval(50); 

//   digitalWrite(LED, LOW);
// }

// void loop() {
//   debouncer.update();

 
//   if (debouncer.fell()) {
//     estadoLED = true;
//     digitalWrite(LED, HIGH);
//     tempoInicio = millis(); 
//   }

  
//   if (estadoLED) {
//     if (millis() - tempoInicio >= tempoAceso) {
//       estadoLED = false;
//       digitalWrite(LED, LOW); 
//     }
//   }
// }

//-------------------------------------tarefa 5-------------------------------------------------------

//  #include <Arduino.h>


// #define LED1 4  
// #define LED2 5
// #define LED3 21


// unsigned long tempoAnterior = 0;


// const unsigned long intervalo4 = 5000;  
// const unsigned long intervalo5 = 10000; 
// const unsigned long intervalo6 = 12000; 

// void setup() {
//   pinMode(LED1, OUTPUT);
//   pinMode(LED2, OUTPUT);
//   pinMode(LED3, OUTPUT);
// }

// void loop() {
//   unsigned long tempoAtual = millis();

  
//   if (tempoAtual - tempoAnterior <= intervalo4) {
//     digitalWrite(LED1, HIGH);
//     digitalWrite(LED2, LOW);
//     digitalWrite(LED3, LOW);
//   }
 
//   else if (tempoAtual - tempoAnterior <= intervalo5 && tempoAtual - tempoAnterior > intervalo4) {
//     digitalWrite(LED1, LOW);
//     digitalWrite(LED2, LOW);
//     digitalWrite(LED3, HIGH);
//   }
  
//   else if (tempoAtual - tempoAnterior <= intervalo6 && tempoAtual - tempoAnterior > intervalo5) {
//     digitalWrite(LED1, LOW);
//     digitalWrite(LED2, HIGH);
//     digitalWrite(LED3, LOW);
//   }
 
//   else {
//     tempoAnterior = tempoAtual;
//   }
// }


