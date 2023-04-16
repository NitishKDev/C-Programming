//taking input,diplay,bubblesort, in array using function by passing address
#include<stdio.h>
#include<conio.h>
void input(int *);
void display(int *);
void sort(int *);
int main()
{
    int a[5];
    input(a);
    display(a);
    sort(a);
    display(a);
    getch();
    return 0;
}
void input(int *x)
{
    int i;
    printf("\nenter elements in array\n");
   for(i=0;i<5;i++)
    scanf("%d",x+i);
}
void display(int *y)
{
    int i;
    printf("\nelements are:\n");
   for(i=0;i<5;i++)
    printf("%d  ",*(y+i));
}
void sort(int *s)
{
    int tmp,i,j;
 for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(*(s+j)>*(s+j+1))
            {
                tmp=*(s+j);
                *(s+j)=*(s+j+1);
                *(s+j+1)=tmp;

            }
        }
    }
}


