#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, a, b, c, d, e;
	
	printf("Input two integers:");
	scanf("%i %i", &x, &y);  //"%i %i" 사이에 , 넣으면 뒤에 인식 안됨.
	 
	
	a=(x&y);
	b=(x|y);
	c=(x^y);
	d=x<<1;
	e=x>>1; 
	
	printf("& result is %i\n", a);
	printf("| result is %i\n", b);
	printf("^ result is %i\n", c);
	printf("<<1 result is %i\n", d);
	printf(">>1 result is %i\n", e);
	
	return 0;
}
