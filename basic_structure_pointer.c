#include<stdio.h>
struct person
{
    int age;
    float weight;
};
void input(struct person *);
void display(struct person *);
int main()
{
    struct person p1;
    input(&p1);
    display(&p1);
    return 0;
}
input(struct person *ptr)
{
     printf("Enter person's age\n");
     scanf("%d",&ptr->age);
     printf("Enter person's weight\n");
     scanf("%f",&ptr->weight);

}
display(struct person *pt)
{
    printf("\nvalues are: age = %d and weight = %f",pt->age,pt->weight);

}
