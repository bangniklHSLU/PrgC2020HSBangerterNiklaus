#include <stdio.h>

//int main (void) funktioniert auch
int main ( int argc, char* argv[] )
{

	int testValue = 2;
	int limitValue = 2;
	if(testValue >= limitValue){
		printf("%d ist bigger or equal to %d\n",
			testValue, limitValue);
	}
	else{
		printf("%d is less than %d\n",
			testValue, limitValue);
	}
	return 0;
}
