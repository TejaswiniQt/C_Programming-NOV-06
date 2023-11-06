/*dynamic array of structures*/

#include <stdio.h>
#include <stdlib.h>

struct student 
{
    int roll_no;
    char name[30];
    float marks;
};

int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    struct student *ptr = (struct student *)malloc(sizeof(struct student)*n);
    printf("Enter the information:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter roll no: ");
        scanf("%d",&ptr[i].roll_no);
        printf("Enter name: ");
        scanf("\n%[^\n]s",ptr[i].name);
        printf("Enter marks: ");
        scanf("%f",&ptr[i].marks);
    }
    printf("Displaying information:\n");
    for(i=0; i<n; i++)
    {
        printf("Roll_no: %d\n",(ptr+i)->roll_no);
        printf("Name: %s\n",ptr[i].name);
        printf("Marks: %f\n",ptr[i].marks);
    }
    free(ptr);
    
    return 0;
}
