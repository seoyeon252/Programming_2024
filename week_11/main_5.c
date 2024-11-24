#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	char h;
	char r;
	FILE*file_pointer;
	file_pointer=fopen("sample.txt","w");
	

	printf("input a word: %s",&c);
	scanf("%s",&c);
	printf("input a word: %s",&h);
	scanf("%s",&h);	
	printf("input a word: %s",&r);
	scanf("%s",&r);

	
	fprintf(file_pointer,"%s", &c);
	fprintf(file_pointer,"%s", &h);
	fprintf(file_pointer,"%s", &r);	
	fclose(file_pointer);
}
