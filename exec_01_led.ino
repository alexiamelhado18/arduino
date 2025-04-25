int ledPin = 13;           // Pino onde o LED está conectado
int tempoLigado = 500;     // Tempo que o LED vai ficar ligado (em milissegundos)
int tempoDesligado = 3000;  // Tempo que o LED vai ficar desligado

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Liga o LED
  delay(tempoLigado);          // Aguarda o tempo de "ligado"
  digitalWrite(ledPin, LOW);   // Desliga o LED
  delay(tempoDesligado);       // Aguarda o tempo de "desligado"
}
