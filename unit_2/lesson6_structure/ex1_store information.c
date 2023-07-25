#include <stdio.h>
struct student{
char name[20]  ;
unsigned roll_num;
float marks;
};
int main()
{
    struct student s;

    printf("Enter information of students: \n");
    printf("Enter name: ");
    scanf("%s",&s.name);
    printf("Enter roll number: ");
    scanf("%d",&s.roll_num);
    printf("Enter marks: ");
    scanf("%f",&s.marks);

    printf("Displaying Information\n");
    printf("name: %s\n",s.name);
    printf("Roll: %d\n",s.roll_num);
    printf("Marks: %.2f\n",s.marks);
}
