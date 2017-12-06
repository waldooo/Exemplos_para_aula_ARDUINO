/*
 * resultado multiplicação
 * Oficina Maker+, dez/2017
 * Professor: Waldo Costa
*/

float numero_a = 0;
float numero_b = 0;
float resultado = 0;

void setup() {
    Serial.begin(9600);
    Serial.print("digite dois numeros separados por espaco ou virgula");
    Serial.println(".....................................................");
}

void loop() {
  
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    int numero_a = Serial.parseInt();
    // do it again:
    int numero_b = Serial.parseInt();

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') {

      resultado = numero_a * numero_b;
      Serial.print("o resultado da multiplicacao de ");
      Serial.print(numero_a);
      Serial.print(" por ");
      Serial.print(numero_b);
      Serial.print(" = ");
      Serial.println(resultado);
      Serial.println(".....................................................");

    }
  }
  

}
