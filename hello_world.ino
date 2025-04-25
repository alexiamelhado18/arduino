// C++ code
//
void setup()
{
    Serial.begin(9600); // Inicia a comunicação com o monitor serial
}

void loop()
{
	Serial.println("Hello, World!"); // Escreve no console serial
  	delay(1000); // Espera 1 segundo antes de repetir
}