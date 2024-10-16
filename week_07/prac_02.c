#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int sumTwo(int a, int b)
{
	int sum;
	sum= a+b;
	return sum;
}

int square(int n)
{
	
	n=n*n;
	return n;
}

int get_max(int t, int h)
{
	if(t<=h)
		return(h);
	else
		return(t);
}


int main(int argc, char *argv[]) {
	int x;
	int y;


	printf("Enter the integers:");
	scanf("%i %i", &x, &y);
		
	printf("result-Sum: %i, Square: %i, Max: %i", sumTwo(x, y), square(x) , get_max(x, y));
	
	return 0;
}
