#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r)
{
	return(factorial(n)/(factorial(r)*factorial(n-r)));
}

int factorial(int a)
{
	int res= 1;
	int i;
	for(i=1;i<(a+1); i++)
		res=res*i;
	return res;
}

int get_integer()
{
	int n;
	printf("Enter the value :");
	scanf("%i", &n);
	return n;
}



int main(int argc, char *argv[]) {
	
	int x;
	int y;
	x=get_integer();
	y=get_integer();
	printf("The result of C(%i , %i) is %i.", x, y, combination(x, y));
	
	return 0;
}
