#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

int main(int argc, char *argv[]) {
	
	FILE*fp=NULL;
	char c;
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	 printf("������ ������.\n");
	
	while((c=fgets(FILE*fp))!=EOF)
  	 {putchar(char c);
}
	 
	fclose(fp);
}
 */

int main(int argc, char *argv[]) {
	
	FILE*fp;
	char str[5];
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	 printf("������ ������.\n");
	
	while(fgets(str, 5, fp)!=NULL)
  	 {
	   printf("%s",fp);
}
	 
	fclose(fp);
}
