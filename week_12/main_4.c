#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[5];
	int (*ptr)[5];
	ptr=grade;
	
	int j;
	
	for(i=0;i<5;i++)
	{ printf("Input value - grade[%i]=",i);
	  scanf("%d", &grade[i]);
	}
	

	for(j=0;j<5;j++){
	  printf("grade[%i]=%i\n",j, (*ptr)[j]);
	
	}
int t;
int sum;
int avg;	
	for(t=0;t<5;t++){
	sum+= (*ptr)[t];
	}
	avg=sum/5;
	printf("average=%i",avg);
}


