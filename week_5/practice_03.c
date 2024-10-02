#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int second, min, sec;
	
	printf("Input the second:");
	scanf("%i", &second);
	
	min=second/60;
	sec=second%60;
	printf("The time is %i : %i", min, sec);

	return 0;
}
