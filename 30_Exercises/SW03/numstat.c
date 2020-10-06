#include <stdlib.h>
#include <stdio.h> 	
			//atof string --> float
#include <math.h> 	
			//fabs() 

int main( int argc, char* argv[] )
{
	float zahl1 = 0.0;
	float zahl2 = 0.0;

	if(argc != 3)
	{
		printf("usage message: numstat value1 value2\n");
	}
	else
	{
		zahl1 = atof(argv[1]); 
		zahl2 = atof(argv[2]);
		
		//Variante 1
		//inputs (in ascending order)
		//float klein = 0.0;
		//float gross = 0.0;

		//if(zahl1 > zahl2)
		//{
			//klein = zahl2; 
			//gross = zahl1; 
		//}
		//else
		//{
			//klein = zahl1; 
			//gross = zahl2; 
		//}
		//printf("smaller value: %.3f\nlarger value: %.3f\n", klein, gross);
		
		//inputs (in ascending order)
		if(zahl1 > zahl2)
		{
			printf("smaller value: %.3f\nlargervalue: %.3f\n", zahl2, zahl1);
		}
		else
		{
			printf("smaller value: %.3f\nlargervalue: %.3f\n", zahl1, zahl2);
		}
		
		//sum
		printf("value1 + value2 = %.3f\n", zahl1+zahl2);
		
		//absolute difference
		printf("absolute difference: %.3f\n", fabs(zahl1-zahl2));
		
		//product
		printf("product: %.3f\n", zahl1*zahl2);
		
		//ratio (input1/input2)
		printf("ratio: %.3f\n", zahl1/zahl2);
	}
	return 0;
}
