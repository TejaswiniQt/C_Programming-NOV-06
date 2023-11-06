/*Structures in c*/
#include <stdio.h>

struct student 
{
    int roll_no;
    char name[30];
    float marks;
};

int main()
{
    struct student s1,*ptr;
    printf("Enter roll no: ");
    scanf("%d",&s1.roll_no);
    printf("Enter name: ");
    scanf("\n%[^\n]s",s1.name);
    printf("Enter marks: ");
    scanf("%f",&s1.marks);
    ptr = &s1;
    printf("Displaying information:\n");
    printf("Roll_no: %d\n",ptr->roll_no);
    printf("Name: %s\n",ptr->name);
    printf("Marks: %f\n",ptr->marks);
    return 0;
}
