const int pin_led = 13;

// Variables que cambiarán:
int estado_led = LOW;             // estado_led usado para configurar el LED
long millis_anteriores = 0;        //  Almacenara la ultima vez que el LED fue actualizado

// la siguiente variable es tipo long porque representa el tiempo, medido en milisegundos.
long intervalo = 1000;           // intervaloo en el cual parpadea (millisegundos)

void setup() {
  // se configura el pin digital como pin de salida
  pinMode(pin_led, OUTPUT);      
}

void loop()
{
  // aca escribes el codigo que correra repetidamente
  // asigna a la varible millis_actuales el valor de la funcion millis()

   unsigned long millis_actuales = millis();
 
  if(millis_actuales - millis_anteriores > intervalo) {
    // almacena la ultima vez que parpadeo el LED
    millis_anteriores = millis_actuales;  

    // si el LED esta apagado, entonces se prende o viceversa.
    if (estado_led == LOW) {
      estado_led = HIGH;
    } else {
      estado_led = LOW;
    }
    // configura el LED con la variable estado_led
    digitalWrite(pin_led, estado_led);
  }
}