int pinbutton1 = 2;
int pinbutton2 = 3;

float inicio = 0;
float fim = 0;
float total = 0;

void setup() {
pinMode(pinbutton1, INPUT_PULLUP);
pinMode(pinbutton2, INPUT_PULLUP);

Serial.begin(9600);
}

void loop() {

if (digitalRead(pinbutton1)==0)
{
  inicio = millis();
}
if (digitalRead(pinbutton2)==0)
{
  fim = millis();
}

if (inicio > 0 && fim > 0 )
{
  total = (fim - inicio)/1000;
  Serial.println(total);

  inicio = 0;
  fim = 0 ;
  total = 0;
}

}
