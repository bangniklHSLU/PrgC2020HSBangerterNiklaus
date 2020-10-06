#include <stdio.h>

int main( int argc, char* argv[] )
{
	printf("Number of Input Arguments: %d\n", argc);
	
	for( int i=0; i < argc; i++ )
	{
		printf("Argument %d was %s\n", i, argv[i]);
	}
	return 0;
}
// im Terminal kann nun z.B. "./cmdTest blabla 123 four" eingegeben werden und es werden dann die Argumente des Arrays zurückgegeben.
// wenn nur "./cmdTest" eingegeben wird, dann ist das Argument 0 bereits "./cmdTest"
