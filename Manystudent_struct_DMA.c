//C program to read and print N student details using structure and Dynamic Memory Allocation
#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int roll;
    float per;
};
int main()
{
    struct student *ptr;
    int n,i;
    printf("Enter number of students ");
    scanf("%d",&n);
    ptr=(struct student*)malloc(n*sizeof(struct student));
    if(ptr==NULL)
    {
        printf("Insufficient memory...exiting");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        printf("Enter student %d details:\n",i+1);
        fflush(stdin);
        printf("Student name? ");
        gets((ptr+i)->name);
        printf("Student roll? ");
        fflush(stdin);
        scanf("%d",&(ptr+i)->roll);
        printf("Student percentage? ");
        scanf("%f",&(ptr+i)->per);
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        printf("Student %d details are : \n",i+1);
        printf("Student name is: %s\n",(ptr+i)->name);
        printf("Student roll is: %d\n",(ptr+i)->roll);
        printf("Student percentage is: %f\n\n",(ptr+i)->per);

    }
    return 0;
}
