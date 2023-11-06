/*copying structures in c*/

#include <stdio.h>

struct student 
{
    int roll_no;
    char name[30];
    float marks;
};

int main()
{
    struct student s1,s2;
    printf("Enter roll no: ");
    scanf("%d",&s1.roll_no);
    printf("Enter name: ");
    scanf("\n%[^\n]s",s1.name);
    printf("Enter marks: ");
    scanf("%f",&s1.marks);
    s2 = s1;
    printf("Displaying information of s2:\n");
    printf("Roll_no: %d\n",s2.roll_no);
    printf("Name: %s\n",s2.name);
    printf("Marks: %f\n",s2.marks);
    printf("Displaying information of s1:\n");
    printf("Roll_no: %d\n",s1.roll_no);
    printf("Name: %s\n",s1.name);
    printf("Marks: %f\n",s1.marks);
    
    return 0;
}
