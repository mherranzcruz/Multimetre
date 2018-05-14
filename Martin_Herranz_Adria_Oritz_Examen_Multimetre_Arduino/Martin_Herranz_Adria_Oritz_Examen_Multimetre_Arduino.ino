/*****************************************************************
**                                                              **
**                        Títol:Examen Arduino                  **
**                           Multimetre                         **
**                                                              **
** NOM:Martin Herranz, Adrià Ortiz             Data:14/05/2018  **
*****************************************************************/
//****************************INCLUDE*****************************


//***************************VARIABLES****************************
const int Entrada = A0;
float valEntrada;
float voltatge;
float resistencia;
float V1;
float V2;
float VT;
//*****************************SETUP******************************

void setup() {                 //Configura el final de salida
  
pinMode(Entrada,INPUT);
Serial.begin(9600);
   
}





//******************************LOOP******************************

void loop() {                 //Inicia el bucle del programa

valEntrada = analogRead(Entrada);

voltatge = ((float) valEntrada * 5.0)/1023;
Serial.print("El Voltatge és: ");
Serial.print(voltatge);
Serial.println(" Volts");
delay(1000);

V1 = 5.0 * 9500.0;
V2 = voltatge * 9500.0;
VT = V1 - V2;

resistencia = VT / voltatge;
Serial.print("La Resistencia és: "); 
Serial.print (resistencia);
Serial.println(" Ohms");
delay(1000);
Serial.println("");
}

//****************************FUNCIONS****************************
