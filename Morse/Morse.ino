/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
// pin for speaker
const int pin = 8;

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //P   ** Exemple PROJECTE 7 MORSE **
  punt();
  ratlla();
  ratlla();
  punt();
  //Espai entre lletres
  espaiL();
  //R  
  punt(); 
  ratlla();
  punt();
   //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //J
  punt();
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //E
  punt();
  //Espai entre paraules
  espaiL();
  //C
  ratlla();
  punt();
  ratlla();
  punt();
  //Espai entre paraules
  espaiL();
  //T 
  ratlla();
  //Espai entre paraules
  espaiL();
  //E
  punt();
  //Espai entre paraules
  espaiP();
  //7
  ratlla();
  ratlla();
  punt();
  punt();
  punt();
  //Espai entre paraules
  espaiP();
  //M   
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre paraules
  espaiL();
  //S
  punt();
  punt();
  punt(); 
  //Espai entre paraules
  espaiL();
  //E
  punt();
  //Espai entre paraules
  espaiP();
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat));

  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

