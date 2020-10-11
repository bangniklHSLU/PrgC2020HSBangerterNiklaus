#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

// Datentyp definieren
typedef enum
{
	show_menu =0,
	start_numstat,
	start_cubic,
	start_factorial,
	start_chose,
	start_binary,
	exit_program
} Selector;

// Funktionen deklarieren
Selector Show_mainmenu(void); //Funktion für Menu-Ansicht und Entscheidung
void ComputeNumstat(float x1, float x2, float arr[]);
long ComputeCubic(long x);
long ComputeFactorial(long x);
long ComputeChose(long x1, long x2);
int ComputeBinary(void);

// Programm
int main( int argc, char* argv[] )
{
	int run 		= 1;
	Selector selection 	= show_menu;
	long ldinput1 		= 0;
	long ldinput2		= 0;
	float finput1 		= 0;
	float finput2		= 0;
	//float inarr[3];
	float arr[6]		= {0};
	
	while(run)
	{	
		switch(selection)
		{
			case show_menu:
				selection = Show_mainmenu(); //Rückgabewert von show_mainmenu wird neuer Wert für selection.
			break;
			
			case start_numstat:
				printf("\n# # # Executing NUMSTAT # # #\n");
				printf("\nEnter 1st floating number: ");
				scanf("%f", &finput1);
				printf("\nEnter 2nd floating number: ");
				scanf("%f", &finput2);
				
				//scanf("%f %f", &inarr[0], &inarr[1], &inarr[2]);
				//printf("value1 is %.3f and value2 is %.3f\n", inarr[0], inarr[1]);
				//scanf("%f %f", &finput1, &finput2);
				printf("\n1st is %.3f and 2nd is %.3f\n", finput1, finput2);
				
				//ComputeNumstat(inarr[0], inarr[1], arr);
				ComputeNumstat(finput1, finput2, arr);
				printf("\nLarger value: %.3f\n", arr[0]); 
				printf("Smaller value: %.3f\n", arr[1]);
				printf("Sum: %.3f\n", arr[2]);
				printf("Absolute difference: %.3f\n", arr[3]);
				printf("Product: %.3f\n", arr[4]);
				printf("Ratio: %.3f\n", arr[5]);
				
				selection = show_menu;
			break;
			
			case start_cubic:
				printf("\n# # # Executing CUBIC # # #\n");
				printf("\nEnter an integer number: ");
				scanf("%ld", &ldinput1);
							
				printf("\n%ld cubed is %ld\n", ldinput1, ComputeCubic(ldinput1));
			
				selection = show_menu;
			break;
			
			case start_factorial:
				printf("\n# # # Executing FACTORIAL # # #\n");
				printf("\nEnter an integer number: ");
				scanf("%ld", &ldinput1);
				
				printf("\nFactorial of %ld is %ld\n", ldinput1, ComputeFactorial(ldinput1));
				 
				selection = show_menu;
			break;
			
			case start_chose:
				printf("\n# # # Executing CHOSE # # #\n");
				printf("\nEnter n as an integer number: ");
				scanf("%ld", &ldinput1);
				printf("\nEnter k as an integer number: ");
				scanf("%ld", &ldinput2);
				
				printf("\n%ld chose %ld is %ld\n", ldinput1, ldinput2, ComputeChose(ldinput1, ldinput2));
				
				selection = show_menu;
			break;
			
			case start_binary:
				ComputeBinary();
								
				selection = show_menu;
			break;
			
			case exit_program:
				printf("\n# # # Exiting - bye-bye! # # #\n");
				run = 0;
			break;
			
			default:
				printf("\n!!!!!!!!! ERROR: Invalid selection !!!!!!!!!!\n");
				selection = show_menu;
			break;
		}
	}
	return 0;
}

// Implementieren der Funktionen
Selector Show_mainmenu(void)
{
	Selector choice = exit_program; //Variable deklarieren
	printf("\n* * * * * * * * * * *\n");
	printf("Main_Menu\n");
	printf("* * * * * * * * * * *\n");
	printf("Enter %d to start NUMSTAT\n", 	start_numstat);
	printf("Enter %d to start CUBIC\n", 		start_cubic);
	printf("Enter %d to start FACTORIAL\n", 	start_factorial);
	printf("Enter %d to start CHOSE\n",		start_chose);
	printf("Enter %d to start BINARY\n",		start_binary);
	printf("Enter %d to exit program\n", 		exit_program);
	printf(" 			   _\n");
	printf("Enter your selection here: ");
	scanf("%d", (int*)&choice);
	return choice; //Wert wird zurückgegeben und als Show_mainmenu ausgegeben.
}

void ComputeNumstat(float x1, float x2, float arr[])
{
	//check + usage message bei falschen bzw. zu vielen inputs fehlt
	if(x1 > x2)
	{
		arr[0] = x1;
		arr[1] = x2;
	}
	else
	{
		arr[0] = x2;
		arr[1] = x1;
	}	
	arr[2] = x1+x2;
	arr[3] = fabs(x1-x2);
	arr[4] = x1*x2;
	arr[5] = x1/x2;	
}

long ComputeCubic(long x)
{
	return x*x*x;
}

long ComputeFactorial(long x)
{
	long result = 0;
	if( x>=1 )
	{
		result = x*ComputeFactorial(x-1);
	}
	else
	{
		result = 1;
	}
	return result;
}

long ComputeChose(long n, long k)
{
	long result = 0;
	result = ComputeFactorial(n)/(ComputeFactorial(k)*ComputeFactorial(n-k));
	return result;
}

int ComputeBinary(void)
{
	int input = 0;
	
	printf("\n# # # Executing BINARY # # #\n");
	printf("\nEnter an integer number: ");
	scanf("%d", &input);
	
	/* 
	%%%% Variante 1 %%%% 
	
	unsigned i = 0;
	
	for(i=1<<31; i>0; i = i/2)
	{	
		(input & i)? printf("1"):printf("0");
	}	
	
	printf("\n%ld in binary form is %ld\n", input, result);
	*/
	
	/*
	%%%% Variante 2 %%%%
	
	printf("\n%ld in binary form is: 0b", input);
	
	int c = 0, k = 0;
	
	for(c = 31; c >= 0; c--)
	{
		k = input >> c;
		
		if (k & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	*/
	
	/*
	%%%% Variante 3 %%%%
	*/
	
	int bin(int n)
	{
		if(n > 1)
		{
			bin(n/2);
		}
		printf("%d", n%2);
		return 0;
	}
	
	printf("\n%d in binary form is :0b", input);
	bin(input);
	printf("\n");
	
	return 0;
}

