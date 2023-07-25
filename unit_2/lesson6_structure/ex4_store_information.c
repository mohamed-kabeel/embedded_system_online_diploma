#include <stdio.h>
struct student{
char name[20]  ;
unsigned roll_num;
float marks;
};
int main()
{
    printf("Enter information of students: \n");
    struct student s[10];
    for(int i =0;i<10;i++)
    {
        printf("for roll number %d\n",i+1);
        s[i].roll_num = i+1;
        printf("Enter name: ");
        scanf("%s",&s[i].name);
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);

    }
    printf("Displaying information of students:\n");
    for(int i =0;i<10;i++)
    {
        printf(" Information for roll number %d \n ",s[i].roll_num);
        printf("name: %s\n",s[i].name);
        printf("Marks: %.2f\n",s[i].marks);
    }
}
