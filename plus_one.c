#include<stdio.h>
#include<conio.h>
int plus_one(int*,int);
int main()
{
    int sz;
    printf("Enter array size ");
    scanf("%d",&sz);
    printf("Enter elements\n");
    int i,a[sz];
    for(i=0;i<sz;i++)
        scanf("%d",&a[i]);
    printf("Array elements are\n");
    for(i=0;i<sz;i++)
        printf("%d ",a[i]);
    printf("\nArray elements +1 is \n");
    printf("%d",plus_one(a,sz));
    getch();
    return 0;
}
int plus_one(int *p,int sz)
{
    int i,num=0,m;
    for(i=0;i<sz;i++)
    {
      num=(num*10)+*(p+i);
    }
    return(num+1);
}
