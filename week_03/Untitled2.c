#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int i;
	int next;
	char n;
	
	printf("enter a character :");
	scanf("%c", &c);
	 
	i=c;
	next=i+1;
	n=next; 
	
	printf("the next character of %c(%i) is %c(%i)", c, i, next, n );



	return 0;
}
