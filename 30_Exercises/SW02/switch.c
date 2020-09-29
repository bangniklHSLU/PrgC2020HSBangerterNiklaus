#include <stdio.h>

int main(void)
{
	int switchValue = 0;
	switch(switchValue)
	{
		case 1: 
			printf("Switch Value: 1\n");
			break;
		case 2:
			printf("Switch Value: 2\n");
			break;
		default:
			printf("Switch Value: no valid switch\n");
			break;
	}
	return 0;
}
