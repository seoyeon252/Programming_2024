#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	int score[5];
	
	score[0]=10;
	score[1]=20;
	score[2]=30;
	score[3]=40;
	score[4]=50;
	
	for(i=0;i<5;i++){
	
		printf("grade[%d]=%d\n", i, score[i]);
	}
		return 0;
}
