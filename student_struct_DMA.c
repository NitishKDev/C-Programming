//C program to read and print the student details using structure and Dynamic Memory Allocation
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
    ptr=(struct student*)malloc(sizeof(struct student));
    if(ptr==NULL)
    {
        printf("Insufficient memory...exiting");
        return 0;
    }
    printf("Enter student details:\n");
    printf("Student name? ");
    gets(ptr->name);
    printf("Student roll? ");
    fflush(stdin);
    scanf("%d",&ptr->roll);
    printf("Student percentage? ");
    scanf("%f",&ptr->per);
    printf("\n");
    printf("Student name is: %s\n",ptr->name);
    printf("Student roll is: %d\n",ptr->roll);
    printf("Student percentage is: %f",ptr->per);
    return 0;
}
