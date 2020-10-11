// Modified program using array 
#include <stdio.h> 

// Store the greater element at 0th index 
void findGreaterSmaller(float a, float b, float arr[]) 
{ 

	// Store the greater element at 
	// 0th index of the array 
	if (a > b) { 
		arr[0] = a+a; 
		arr[1] = b; 
	} 
	else { 
		arr[0] = a+b; 
		arr[1] = a; 
	} 
} 

// Driver code 
int main() 
{ 
	float x, y; 
	float arr[2]; 

	printf("Enter two numbers: \n"); 
	scanf("%f%f", &x, &y); 

	findGreaterSmaller(x, y, arr); 

	printf("\nThe greater number is %f and the"
		"smaller number is %f\n", 
		arr[0], arr[1]); 

	return 0; 
} 

