/*************************************************************************
**                                                                      **
**                            SIRENA                                    **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int durada;        
int freq;          
int pin = 9;      

//****** setup ***********************************************************

void setup(){
  pinMode( pin,OUTPUT);
}

//****** Loop ************************************************************
void loop() {
  durada = analogRead(A0)*10; 
  freq = analogRead(A1);
 
  tone(pin,1000,500); 
  
  delay(690);
}
