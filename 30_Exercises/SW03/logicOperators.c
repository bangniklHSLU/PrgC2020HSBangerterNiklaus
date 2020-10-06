#include <stdio.h>
#include <stdlib.h>
//für atoi

int main( int argc, char* argv[] )
{
	int value1 = 0, value2 = 0, value3 = 0;
	// make sure we have exactly 3 arguments 
	// wenn argumentcount nicht 4 ist, können es sicher keine 3 Argumente sein.
	if( argc != 4)
	{
		// usage message
		printf("usage: logicOperator val1 val2 val3\n");
	}
	else
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		value3 = atoi(argv[3]);
		
		printf("Value1 %d, Value2 %d, Value3 %d\n", value1, value2, value3);
	
		// negativ
		if( value1 <0 || value2 <0 || value3 <0)
		{	
			printf("The entered values are not all positive. Exiting.\n");
		}
		else
		{
			// kleinste
			if ( value1 < value2 && value1 < value3)
			{
			printf("The smallest of the entered values is: %d\n", value1);
			}
			if( value2 < value1 && value2 < value3)
			{
			printf("The smallest of the entered values is: %d\n", value2);
			}
			if( value3 < value1 && value3 < value2)
			{
			printf("The smallest of the entered values is: %d\n", value3);
			}
			
			// grösste
			if ( value1 > value2 && value1 > value3)
			{
			printf("The largest of the entered values is: %d\n", value1);
			}
			if( value2 > value1 && value2 > value3)
			{
			printf("The largest of the entered values is: %d\n", value2);
			}
			if( value3 > value1 && value3 > value2)
			{
			printf("The largest of the entered values is: %d\n", value3);
			}

			// summe
			int sum = 0;
			sum = value1 + value2 + value3;
			printf("The sum of all values is: %d\n", sum);
			
			//"The average of all values is: "
			float avg = 0;
			avg = sum/3.0;
			printf("The average of all values is: %f\n", avg);
			//alternativ: printf("The average of all values is: %f\n", value1+value2+value3 /3.0)
		}
	}
	return 0;
}
