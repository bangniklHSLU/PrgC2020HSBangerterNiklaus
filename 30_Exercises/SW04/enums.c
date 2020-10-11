#include <stdio.h>

//Datentyp ist hier int für enum
typedef enum
{
	einfraenkler 	=1,
	zweifraenkler 	=2,
	fuenfliber 	=5
} SwissCoin;

typedef enum
{
	nickle 	=5,
	dime		=10,
	quarter	=25
} USACoin;

//Bsp. für eigenen Datentyp 
typedef float myFloat;

int main( int argc, char* argv[] )
{
	SwissCoin chCoin = fuenfliber;
	//Alternative:
	//SwissCoin chCoin; //Deklaration, wie bei int, float, etc.
	//chCoin = fuenfliber; //Zuweisung
	USACoin usaCoin = nickle;

	printf("SwissCoin: %d\nUSACoin: %d\n", chCoin, usaCoin);
	
	//Bsp. ff
	myFloat e = 2.71;
	
	printf("e=%.2f\n", e);
	
	return 0;
}
