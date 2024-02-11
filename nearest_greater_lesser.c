//program to find nearest lesser and greater element in an array

#include<conio.h>
#include<stdio.h>
void bubble_asc(int [],int);
void bubble_desc(int [],int);
int main()
{
    int sz,i,j,tar;
    printf("Enter size of array\n");
    scanf("%d",&sz);
    int a[sz];
    int len=sizeof(a)/sizeof(int);
    printf("Enter elements in the array\n");
    for(i=0;i<len;i++)
        scanf("%d",&a[i]);
    printf("\nEnter target element whose nearest you wanna find\n");
    scanf("%d",&tar);
    bubble_desc(a,len);
     for(i=0;i<len;i++)
        if(tar>a[i])
            {
              printf("\nNearest smallest number to %d is %d\n",tar,a[i]);
              break;
            }


    bubble_asc(a,len);
    for(i=0;i<len;i++)
        if(tar<a[i])
        {
           printf("\nNearest greater number to %d is %d\n",tar,a[i]);
           break;
        }


    getch();
    return 0;
}
void bubble_desc(int *ptr,int len)
{
    int i,j,t;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(*(ptr+j)< *(ptr+j+1))
            {
                t=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=t;
            }
        }
    }
}
void bubble_asc(int *ptr,int len)
{
    int i,j,t;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(*(ptr+j)> *(ptr+j+1))
            {
                t=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=t;
            }
        }
    }
}
