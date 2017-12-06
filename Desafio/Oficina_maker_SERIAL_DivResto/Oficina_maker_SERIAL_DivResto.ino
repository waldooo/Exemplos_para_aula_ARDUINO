/*
 * resultado inteiro + resto
 * Oficina Maker+, dez/2017
 * Professor: Waldo Costa
*/

int numero_a = 0;
int numero_b = 0;
int resultado_inteiro = 0;
float resto = 0;

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

      resto = numero_a % numero_b;
      resultado_inteiro = numero_a / numero_b;
      
      Serial.print("o resultado da divisao de ");
      Serial.print(numero_a);
      Serial.print(" por ");
      Serial.print(numero_b);
      Serial.print(" = ");
      Serial.print(resultado_inteiro);
      Serial.print(" inteiro + ");
      Serial.print(resto);
      Serial.print(" de resto ");
      Serial.println(".....................................................");

    }
  }
  

}
