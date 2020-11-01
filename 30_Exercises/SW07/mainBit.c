#include <stdio.h>

#include "bitOperation.h"

int main( int argc, char *argv[])
{
	unsigned char myNumber = 0x10; // hexadezimal: 16
	printf("Before: %d 0x%x\n", (unsigned char)myNumber, (unsigned char)myNumber);
	SetBitNInByte( &myNumber, 1);
	//erwartetes Resultat: 0x12 // dezimal: 18
	printf("After setting Bit 1: %d 0x%x\n", (unsigned char)myNumber,  (unsigned char)myNumber);
	SetBitNInByte ( &myNumber, 7);
	//erwartetes Resultat: 0x92 // dezimal: 146	
	printf("AFter setting Bit 7: %d 0x%x\n", (unsigned char)myNumber,  (unsigned char)myNumber);
	
	return 0;
}
