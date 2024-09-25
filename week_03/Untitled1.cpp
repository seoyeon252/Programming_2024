#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int i;
	char next;
	
	printf("enter a character :%i\n");
	scanf("%c", &c);
	 
	i=c;
	next=i+'0';
	printf("the next character of", i, "is", next);
	scanf("%c", &c);
	


	return 0;
}
