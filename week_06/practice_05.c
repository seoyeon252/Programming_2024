#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int num_1;
	int num_2;
	char cal;
	
	printf("Enter the calculation:");
	scanf("%i %c %i", &num_1, &cal, &num_2);
	
	if(cal=='+')
		printf("= %i", num_1+num_2);
	else if(cal=='-')
		printf("= %i", num_1-num_2);
	else if(cal=='*')
		printf("= %i", num_1*num_2);
	else if(cal=='/')
		printf("= %i", num_1/num_2);
		
	return 0;
}
