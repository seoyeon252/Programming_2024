#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int intput_int;
	float intput_float;
	
	printf("enter an integer : ");
	scanf("%d", &intput_int );
	
	printf("enter an float : ");
	scanf("%f", &intput_float );
	
	printf("integer : %d, float : %f\n", intput_int, intput_float);

	return 0;
}
