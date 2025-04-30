
const int trigPin = 10;   	// Pino Trigger
const int echoPin = 9;		// Pino Echo
const int ledPin = 13; 		// Pino do LED
const int distanciaLimite = 100;

long duracao;     // Variável para armazenar o tempo do eco (em microssegundos)
int distanciaCm;  // Variável para armazenar a distância calculada (em cm)


void setup()
{
  Serial.begin(9600); //A função begin é um intermediador para comunicação entre o arduino e o computador, para ambos estarem sicronizados. E é uma boa prática, SEMPRE usá-lo

  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
}

void loop()
{
  digitalWrite(trigPin, LOW); //Resentando o estado desse pin, para garantir que está no estado inicial
  delayMicroseconds(10); //Determina um tempo
  	
  
  digitalWrite(trigPin, HIGH); //Mudando o estado deste pin para Alto, para começar a enviar onda sonora
  delayMicroseconds(10); // Posto um tempo pois o HC-SR04 precisa de pelo menos 10µs para que receba o pulso corretamente

  digitalWrite(trigPin, LOW);


  duracao = pulseIn(echoPin, HIGH); // Mede o tempo (em microssegundos) que o pino Echo ficou em HIGH e guarda em 'duracao'.

 // Calcula a distância em centímetros
  distanciaCm = (duracao * 0.034) / 2;		// Converte tempo em distância (cm)

  
  if (distanciaCm > 0 && distanciaCm <= distanciaLimite) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Algo está se aproximando, está há:" + String(distanciaCm) + "cm");

  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Nenhum objeto no campo de " + String(distanciaLimite) + "cm");
  }
  
  //Atribuido um tempo para durar um o comportamente instruino na condição acima
  delay(500);
}