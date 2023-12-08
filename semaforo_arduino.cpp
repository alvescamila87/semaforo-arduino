// Define Entradas digitais
const int pedestrian_button = 5; // botão para permitir a travessia de pedestres
bool checkButtonPressed = false; // botão para verificar se o pedestre solicitou a passagem
bool checkButtonPressed10seconds = false; // botão para verificar se o pedestre solicitou a passagem abaixo de 80 segundos

// Define Saídas digitais
const int traffic_red_light = 10; 
const int tom_329_Hz = 9; // pino para controle do som 
const int traffic_yellow_light = 11; 
const int traffic_green_light = 12; 
const int pedestrian_red_light = 6; 
const int pedestrian_green_light = 7; 


void setup() {
  
  
	Serial.begin(9600); // Inicialização da comunicação serial
	
	// Inicializar saídas digitais - tráfego veículos
	pinMode(traffic_red_light, OUTPUT);
	pinMode(traffic_yellow_light, OUTPUT);
	pinMode(traffic_green_light, OUTPUT);
	
	// Inicializar saídas digitais - pedestre
	pinMode(pedestrian_red_light, OUTPUT);
	pinMode( pedestrian_green_light, OUTPUT);
	
	// Inicializar entrada digital 
	pinMode(pedestrian_button, INPUT_PULLUP); // configuração do botão com resistor de pull-up interno  
         

}

void loop() {
    
	// Configuração inicial dos semáforos
	Serial.println("Ciclo semáforos: VERMELHO para veículos e VERDE para pedestres");
	digitalWrite(traffic_red_light, HIGH);
	digitalWrite(pedestrian_green_light, HIGH);               
 
  	// Se o botão de pedestres for pressionado, verifica se falta mais de 
    // 10 segundos para fechar o semáforo para os veículos
	if(checkButtonPressed10seconds) {
      
      	Serial.println("Botão acionado faltando mais de 10 segundos para abrir semáforo pedestre.");
      	Serial.println("Iniciando delay de 35 segundos.");
      
    	for(int i = 0; i < 175; i++) { 
			  
			delay(200); // duração 200 ms x 175 = 35 segundos 
			Serial.println(i);
				  
	  	}
      
    	checkButtonPressed10seconds = false;
    
    // Senão, inicia contagem para abrir o semáforo verde do veículo (80 segundos)
	} else {    
		
      	Serial.println("Iniciando contagem de 80 segundos para passagem de pedestres.");

		for(int i = 0; i < 400; i++) { 
			  
			  delay(200); // duração 200 ms x 400 = 80 segundos 
			  Serial.println(i);
				  
		}
      
	}
  
	
  	// Avisa o pedestre que o semáforo VERDE do veículo irá abrir
    // 1,5s + 1s = 2,5 * 4 = 10s
	for(int i = 0; i < 4; i++) {
		
		delay(1000); // duração 1 segundo  
		tone(tom_329_Hz, 329, 1000); // Som com tom de 329 Hertz
      	Serial.println("Tom 329 Hz!");
		delay(1500); // duração 1,5 segundo
        Serial.println(i);
		 		  
	}
  
	// Abertura de semáforo VERDE para passagem de veículos
    Serial.println("Ciclo semáforos: VERDE para veículos e VERMELHO para pedestres");
  	digitalWrite(traffic_green_light, HIGH);
	digitalWrite(traffic_red_light, LOW);	
	digitalWrite(pedestrian_red_light, HIGH);
	digitalWrite(pedestrian_green_light, LOW);	    
            
	// Aguarda o botão de pedestres OU continua por 450 ciclos (90 segundos) 
  	Serial.println("Iniciando contagem de 90 segundos para passagem de veículos.");
	for(int i = 1; i < 450; i++) {
		
		if(digitalRead(pedestrian_button) == LOW) { 		

			checkButtonPressed = true;
			Serial.println("Botão acionado pelo pedestre!");
          	
          	// Verifica se falta mais do que 10 segundos para abrir 
          	// o semáforo VERDE para o pedestre
          	if(i < 400) {
              
            	Serial.println("Botão acionado faltando mais de 10 segundos para abrir semáforo pedestre.");
      			i = 400;
            	checkButtonPressed10seconds = true;
          	}
			
          
		}
              	
      	Serial.println(i);
		delay(200); // duração 2 segundos  
				
	}	
	
	// Atualiza os semáforos para amarelo e aguarda 6 segundos
  	Serial.println("Ciclo semáforos: AMARELO para veículos");
	digitalWrite(traffic_yellow_light, HIGH);
	digitalWrite(traffic_green_light, LOW);
		
	delay(6000); // duração 6 segundos	
  
  	digitalWrite(traffic_yellow_light, LOW);
  	digitalWrite(pedestrian_red_light, LOW); 
  
    
}
  