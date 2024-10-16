#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer;
	answer=50;
	int num;
	int trial=1;
	
	
	
	do{

	printf("Guess a number:");
	scanf("%i", &num);
	
	if(num>answer)
	{
		printf("low\n");
		trial+=1;
	}
	else if(num<answer)
	{
		printf("high\n");
		trial+=1;
	}
		
	else if(num==answer)
	{
		printf("Congratulation! Trials : %i", trial);
		break;
	}
    }
	while(1);{

        }
	return 0;
}
