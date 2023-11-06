/*Structures in c*/

#include <stdio.h>

struct student 
{
    int roll_no;
    char name[30];
    float marks;
};

void print(struct student *s1);

int main()
{
    struct student s1,*ptr;
    printf("Enter roll no: ");
    scanf("%d",&s1.roll_no);
    printf("Enter name: ");
    scanf("\n%[^\n]s",s1.name);
    printf("Enter marks: ");
    scanf("%f",&s1.marks);
    print(&s1);
    return 0;
}

void print(struct student *s1)
{
    printf("Displaying information:\n");
    printf("Roll_no: %d\n",s1->roll_no);
    printf("Name: %s\n",s1->name);
    printf("Marks: %f\n",s1->marks);
}
