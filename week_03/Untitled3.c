#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int num_1;
	int num_2;
	float n_1; 
	float n_2;

	printf("enter two integers :");
	scanf("%i, %i", &num_1, &num_2);
	
	n_1=num_1;
	n_2=num_2;
	
	printf("%f/%f=%f", n_1, n_2, n_1/n_2 );
	



	return 0;
}
