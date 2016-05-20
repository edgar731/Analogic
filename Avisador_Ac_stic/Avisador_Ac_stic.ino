/*************************************************************************
**                                                                      **
**                         AVISADOR ACÚSTIC                             **
**                                                                      **
*************************************************************************/

 
//****** Includes ********************************************************


//****** Variables *******************************************************

int speaker = 8;   
int LDR1 = A0;        
int LDR2 = A1;         
int LDR3 = A2;        
int durada;   

int sLDR1;
int sLDR2;
int sLDR3;
  

//****** Setup ***********************************************************
void setup()
{
  pinMode(speaker, OUTPUT);     
  pinMode (8, OUTPUT);
  }

//****** Loop ************************************************************
void loop()
{
  sLDR1 = analogRead(LDR1);
  sLDR2 = analogRead(LDR2); 
  sLDR3 = analogRead(LDR3);

  durada = min(sLDR1, sLDR2); 
  durada = min(sLDR3, durada);

  tone(speaker, 1000, durada);
  
  delay(2*durada);

 
}
  
