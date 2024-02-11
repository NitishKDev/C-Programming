//Bubble sorting in ascending order

#include<conio.h>
#include<stdio.h>
void bubble_asc(int [],int);
void display(int[],int);
int main()
{
    int sz,i,j;
    printf("Enter size of array\n");
    scanf("%d",&sz);
    int a[sz];
    int len=sizeof(a)/sizeof(int);
    printf("Enter elements in the array\n");
    for(i=0;i<len;i++)
        scanf("%d",&a[i]);
    bubble_asc(a,len);
    display(a,len);
    getch();
    return 0;
}
void bubble_asc(int *ptr,int len)
{
    int i,j,t;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                t=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=t;
            }
        }
    }
}
void display(int *ptrq,int lenw)
{
     int i;
     printf("\nArray elements in ascending order:\n");
     for(i=0;i<lenw;i++)
        printf("%d ",*(ptrq+i));
}
