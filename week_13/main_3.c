#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define STUDENTNUM 4
struct student{
	int ID;
	int score;
};
int main(int argc, char *argv[]) {
	struct student s[STUDENTNUM];
	int i;	
	for(i=0;i<STUDENTNUM;i++){ 
	printf("Input the ID :");
	scanf("%i", &s[i].ID);
	printf("Input the score :");
	scanf("%i", &s[i].score);
	}

int t;
int sum;
int avg;	
	for(t=0;t<4;t++){
	sum+= s[t].score;
	}
	avg=sum/4;
	printf("average=%i",avg);

int j;
int a=s[j].score;
int b=s[j].ID;
for(j=0;j<4;j++)
{
	if(a<s[j].score)
	a=s[j].score;
	b=s[j].ID;
	
}
printf("The highest score - ID:%i, score:%d",b, a);
}
