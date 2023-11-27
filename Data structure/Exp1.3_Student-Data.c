//Name :Rakesh .S. Yadav Roll no: 2029
//Student Database using Structure
#include <stdio.h>
#define MAX_STUDENTS 10
struct Student 
{
	char name[50];
	int roll;
	float marks;
};
void readStudent(struct Student *s) 
{
	printf("Enter Student First name: ");
	scanf("%s", s->name);
	printf("Enter Student roll: ");
	scanf("%d", &s->roll);
	printf("Enter Student CPI: ");
	scanf("%f", &s->marks);
}
void printStudent(struct Student s) 
{
	printf("Name: %s\n", s.name);
	printf("Roll: %d\n", s.roll);
	printf("CPI: %.2f\n", s.marks);
}
int main() 	
{
	struct Student students[MAX_STUDENTS];
	int n, i;
   	printf("Name :Rakesh S. Yadav\nRoll no: 2029\n\n");
	printf("Enter The Number Of Students (MAX: %d): ", MAX_STUDENTS);
	do {
		scanf("%d", &n);
		if (n <= 0) {
			printf("(Invalid) Enter a Non-Zero Number: ");
		}
	} while (n <= 0);
	for (i = 0; i < n; i++) {
		printf("\nEnter Information For Student %d:\n", i+1);
		readStudent(&students[i]);
	}
	for (i = 0; i < n; i++) {
		printf("\nInformation Of Student %d:\n", i+1);
		printStudent(students[i]);
	}
return 0;
}