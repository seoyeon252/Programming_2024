#include <stdio.h>
#include <stdlib.h>

/*
extern int sum;

int sum1(void)
{
	sum=sum+1;
}
*/

extern int all_files;
void sub(void)
{
	all_files=10;
}
