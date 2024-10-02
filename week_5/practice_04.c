#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year, a, b, c, yun;
	
	printf("Input the year:");
	scanf("%i", &year);
	
	a = year%4;
	b = year%100; 
	c = year%400;

	yun = (a==0)&&(b!=0)||(c==0);
	printf("Is the year %i the leap year? %i", year, yun);
	
	return 0;
}
