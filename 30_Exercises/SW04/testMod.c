#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main( int argc, char* argv[] )
{	
	int input1 = atoi(argv[1]);
	int input2 = atoi(argv[2]);
	printf("%d\n\n", input1 % input2);
	return 0;
}
