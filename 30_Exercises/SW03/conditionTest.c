#include <stdio.h>

int main( int argc, char* argv[] )
{
	int x = 0, y = 0;
	printf("before: x = %d, y %d\n", x, y);
	
	// case 1: y=0
	x = y ? 1 : 100;
	printf("y = 0: x = %d, y = %d\n", x, y);
	
	// case 2: y= 200
	y = 200;
	x = y ? 1 : 100;
	printf("y = 100: x = %d, y = %d\n", x, y);
	
	// case 3: y=-1
	y = -1;
	x = y ? 1 : 100;
	printf("y = -1: x = %d, y = %d\n", x, y);

	return 0;
}
// Leseart: wenn y "wahr" ist, ist x = 1, es wird 1 zu x zugewiesen. Wenn y "falsch" ist, ist x = 100, es wird 100 zu x zugewiesen.
// y ist "false", y genau 0 ist, sonst immer "true" (d.h. für -1, odr 100).
