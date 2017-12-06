/*
 * Cronometro com dois botoes
 * Oficina Maker+, dez/2017
 * Professor: Waldo Costa
 */
int pinbutton1 = 2;
int pinbutton2 = 3;

float inicio = 0;
float fim = 0;
float total = 0;

void setup() {
pinMode(pinbutton1, INPUT_PULLUP);
pinMode(pinbutton2, INPUT_PULLUP);

Serial.begin(9600);
//Serial.print(); envia valor para monitor serial e continua na mesma linha
//Serial.println(); envia valor para monitor serial e cria uma nova linha
Serial.println("###################");
Serial.println("pronto para iniciar");
Serial.println("###################");
}

void loop() {

if (digitalRead(pinbutton1)==0 && inicio==0) 
    //após dar um valor para a variável "inicio", a condição não é mais satisfeita.
{
  inicio = millis();
  Serial.println("iniciando cronometragem...");
}
if (digitalRead(pinbutton2)==0 && inicio>0) 
    //para nao termos resultados negativos a condição só se satisfaz se "inicio" > 0.
{
  fim = millis();
  
}

if (inicio > 0 && fim > 0 )
{
  Serial.println("cronometragem finalizada!");
  Serial.println("###################");
  total = (fim - inicio)/1000;
  Serial.print("tempo total: ");
  Serial.print(total);
  Serial.println(" segundos");
  Serial.println("###################");
  Serial.println(" "); //para deixar uma linha em branco
  
  delay(1000);

  inicio = 0;
  fim = 0 ;
  total = 0;
}

}
