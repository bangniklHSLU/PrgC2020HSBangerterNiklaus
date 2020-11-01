//system includes
#include <stdio.h>

//custom includes
#include "hello.h"


void happySunshine( void ){
	printf("Happy Sunshine!\n");
	helloWorld();
}
//prototypes & declarations
void helloWorld( void)
{
	printf("Hello World!\n");
	happySunshine();
}

//Implementiertung.
//Idee: Signatur und Implementierung trennen, d.h. Signatur (.h) veröffentlichen, aber Implementierung (.c) nicht!
