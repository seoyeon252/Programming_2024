#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num_1;
	
	printf("enter two integers :");
	scanf("%i", &num_1);
	
	if(num_1<0)
		printf("%i", num_1*(-1));
	else if(num_1>=0)
		printf("%i", num_1);

		
	return 0;
}
