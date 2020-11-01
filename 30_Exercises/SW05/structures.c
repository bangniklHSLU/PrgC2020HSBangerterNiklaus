#include <stdio.h>
#include <stdlib.h> // rand

////////////////////////////////////////////

struct Point2D1{
	double x1; //8 bytes
	double y1; //8 bytes, Total: 16 bytes
};

struct Point2D1 myPoints1[10]; //array von 10 punkten, die dem struct entsprechen

struct Rectangle1{
	struct Point2D1 pointTopLeft2; //8 + 8 = 16 bytes
	struct Point2D1 pointBottomRight2; //16 bytes
	double area1; //8 bytes, Total: 40 bytes
};

struct Rectangle1 myRectangles1[10]; // array von 10 rectangles als komplexe struktur

////////////////////////////////////////////

typedef struct {
	int x; //4 bytes
	int y; //4 bytes, Total: 8 bytes
} Point2D;

typedef struct{
	Point2D pointTopLeft; //8 bytes
	Point2D pointBottomRight; //8 bytes
	double area; //8 bytes, Total: 24 bytes
} Rectangle;

#define NUM_RECTANGLES 10
Rectangle myRectangles[NUM_RECTANGLES]; 

////////////////////////////////////////////

void PrintRectArr( Rectangle myRectangles[], int ArrayLenght);
void PrintRect( Rectangle myRectangle );
double ComputeRectArea( Rectangle myRectangle );

int main( int argc, char* argv[] )
{
	//init random number genrator
	srand(42); //fängt immer bei 42 an --> pseudo-random
	
	//init rectangles with rand nr
	for ( int i =0; i < NUM_RECTANGLES; i++ )
	{
		// random coordinates for TopLeft
		myRectangles[i].pointTopLeft.x = rand() % 500-250;
		myRectangles[i].pointTopLeft.y = rand() % 500-250;
		
		// make sure BottomRight is to the right of TopLeft and below TopLeft
		// --> take TopLeft x and add a random number to it (between 1 and 100)
		myRectangles[i].pointBottomRight.x = myRectangles[i].pointTopLeft.x + rand() % 100 + 1;
		// --> take TopLeft y and subtract random number from it (between 1 and 100)
		myRectangles[i].pointBottomRight.y = myRectangles[i].pointTopLeft.y - rand() % 100 + 1;
		
		// fill in area
		myRectangles[i].area = ComputeRectArea(myRectangles[i]);	
	}

	//überprüfen, ob grössen stimmen
	//printf("%ld\n", sizeof(struct Rectangle1) );
	
	PrintRectArr(myRectangles,NUM_RECTANGLES);

	return 0;
}




void PrintRect( Rectangle myRectangle )
{
	printf("%d\t%d \t %d\t%d\t %f\n", \
	 myRectangle.pointTopLeft.x, myRectangle.pointTopLeft.y, \
	 myRectangle.pointBottomRight.x, myRectangle.pointBottomRight.y, \
	 myRectangle.area);
}

void PrintRectArr( Rectangle myRectangles[], int ArrayLenght)
{
	for(int i = 0; i < NUM_RECTANGLES; i++ )
	{
		PrintRect( myRectangles[i]);
	}
}

double ComputeRectArea( Rectangle myRectangle )
{
	double area = 0.0;
	Point2D ptTL = myRectangle.pointTopLeft;
	Point2D ptBR = myRectangle.pointBottomRight;

	int deltaX = (ptBR.x - ptTL.x);
	int deltaY = (ptTL.y - ptBR.y);
	area = (deltaX * deltaY);
		
	return area;
}



























