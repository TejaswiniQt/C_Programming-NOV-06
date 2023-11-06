/*array of structures*/

#include <stdio.h>

struct student 
{
    int roll_no;
    char name[30];
    float marks;
};

int main()
{
    struct student s1[5];
    int i;
    printf("Enter the information:\n");
    for(i=0; i<5; i++)
    {
        printf("Enter roll no: ");
        scanf("%d",&s1[i].roll_no);
        printf("Enter name: ");
        scanf("\n%[^\n]s",s1[i].name);
        printf("Enter marks: ");
        scanf("%f",&s1[i].marks);
    }
    printf("Displaying information:\n");
    for(i=0; i<5; i++)
    {
        printf("Roll_no: %d\n",s1[i].roll_no);
        printf("Name: %s\n",s1[i].name);
        printf("Marks: %f\n",s1[i].marks);
    }
    
    return 0;
}
