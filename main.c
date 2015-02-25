#include "config.h"
/*
* Testzweig 1
*/

//Ab jetzt ist es endlich gemerged
//Und wieder gehts weiter
//Masterfile weitergemacht

//Das ist das Masterfile
void masterfunction(void)
{
	Serial.println("Hallo Welt");
//Jetzt schreib ich auch mal einen Kommentar ins Masterfile
//Jetzt schreib ich auch mal einen Kommentar ins Masterfile
}

void main(void)
{
	uint8_t Hallo;
	uint8_t Welt;
	
	for (int i = 0; i < 20; i++)
	{
		uint8_t Zahl1 = 0;
		uint8_t Zahl2 = 1;
		Zahl1 += Zahl2;
	}
	
	while(1){
	};
}

//Testzweig
void SerialHandler(void)
{
	Serial.println("Jetzt is was los");
	Serial.print("Hallo Welt");
	Serial.print("Hallo Welt");
}