#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int ID;
	char name[10];
	double grade;
	};
int main(int argc, char *argv[]) {
	struct student s={24, "heeseung", 4.3};
	s.ID=25;
	strcpy(s.name,"seoyeon");
	s.grade=4.5;
	
	printf("ID= %i\nname= %s\ngrade= %f", s.ID, s.name, s.grade);

	return 0;
}
