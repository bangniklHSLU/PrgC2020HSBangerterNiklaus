#include <stdio.h>
#include <stdlib.h>

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

long ComputeChose(long n,long k)
{
	long result = 0;
	result = ComputeFactorial(n)/(ComputeFactorial(k)*ComputeFactorial(n-k));
	return result;
}

int main( int argc, char* argv[] )
{
	long n = atoi(argv[1]);
	long k = atoi(argv[2]);

	printf("\n%ld chose %ld is %ld\n", n, k, ComputeChose(n, k));
	return 0;
}
