int led = 13;
int botao = 2;

void setup() {
  pinMode(botao, INPUT);  //O pino botão irá receber
  pinMode(led, OUTPUT);   //O pino led irá enviar
}

void loop() {
  int estadoBotao;
  estadoBotao = digitalRead(botao);  // A função digitalRead le o estado dos pinos, nesse caso está lendo do pino da variavel botao

  if (estadoBotao == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}