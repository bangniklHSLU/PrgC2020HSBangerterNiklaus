#include <stdio.h>

int main( int argc, char* argv[] )
{
	int limitValue = 200;
	int maxLoopExecutions = 100;
	int counter = 0;
	while( counter < limitValue )
	{
		counter++;
		// ist das Gleiche wie: counter = counter + 1;
		printf("# of while loop executions: %d\n", counter);
		if( counter > maxLoopExecutions )
		{
			break;
		}
	}
	return 0;
}
