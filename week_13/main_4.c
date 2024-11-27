#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct point{
	int x;
	int y;
};
/*
int getArea(struct point p1, struct point p2)
{
int xx;
int yy;
int ar;

 xx=fabs(p1.x-p2.x);
 yy=fabs(p1.y-p2.y);
 ar=xx*yy;
}

int main(int argc, char *argv[]) {
	struct point p1,p2;
	printf("Input the coordinate p1(x y):");
	scanf("%d %d", &p1.x, &p1.y);
	printf("Input the coordinate p2(x y):");
	scanf("%d %d", &p2.x, &p2.y);
	
	int area;
	printf("Area: %d",getArea(p1,p2));
	return 0;
}

*/
int getArea(struct point *pPtr1, struct point *pPtr2)
{
int xx;
int yy;
int ar;

 xx=fabs((pPtr1->x)-(pPtr2->x));
 yy=fabs((pPtr1->y)-(pPtr2->y));
 ar=xx*yy;
}

int main(int argc, char *argv[]) {
	struct point p1,p2;
	struct point *pPtr1,*pPtr2;
	pPtr1=&p1;
	pPtr2=&p2;
	printf("Input the coordinate p1(x y):");
	scanf("%d %d", &pPtr1->x, &pPtr1->y);
	printf("Input the coordinate p2(x y):");
	scanf("%d %d", &pPtr2->x, &pPtr2->y);
	
	int area;
	printf("Area: %d",getArea(pPtr1,pPtr2));	
	return 0;
}

