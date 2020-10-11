#include <stdio.h>
#include <stdlib.h>

// forward declaration, function prototypes
long ComputeProduct (long x, long y);

int main( int argc, char* argv [] )
{
	long input1 = atoi(argv[1]);
	long input2 = atoi(argv[2]);
	long Product = 0;
	
	printf("Input Values: %ld and %ld\n", input1, input2);
	
	Product = ComputeProduct(input1, input2) ;
	
	printf("Product Value: %ld\n", Product);
	return 0;
}

long ComputeProduct(long x, long y)
{
	long Product = 0;
	Product = x * y;
	return Product;
}
