#include <stdio.h>
#include <stdlib.h>

// forward declaration, function prototypes
long ComputeCubic ( long x );

int main( int argc, char* argv [] )
{
	long input = atoi(argv[1]);
	long xCubed = 0;
	// hat nichts mit xCubed aus Funktion zu tun
	
	printf("Input Value: %ld\n", input);
	
	xCubed = ComputeCubic( input) ;
	
	printf("Cubic Value: %ld\n", xCubed);
	return 0;
}

// implementation, auch: definition
long ComputeCubic( long x)
{
	long xCubed = 0;
	xCubed = x * x * x;
	return xCubed;
// return x*x*x // zulässig.
}
