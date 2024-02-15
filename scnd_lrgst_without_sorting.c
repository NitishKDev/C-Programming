//program to find second largest number from array without sorting.
#include<stdio.h>
#include<conio.h>
int sec_lar(int [],int);
int main()
{
   int sz,i,j,fin=0;
    printf("Enter size of array\n");
    scanf("%d",&sz);
    int a[sz];
    int len=sizeof(a)/sizeof(int);
    printf("Enter elements in the array\n");
    for(i=0;i<len;i++)
        scanf("%d",&a[i]);
    fin=sec_lar(a,len);
    printf("Second largest number is %d",fin);
    getch();
    return 0;
}
int sec_lar(int *ptr,int len)
{
    int max,i,min=9999,j;
    max=*ptr;
    for(i=1;i<len;i++)
        if(max<*(ptr+i))
            max=*(ptr+i);
    for(i=0;i<len;i++)
    {
        if(max!=*(ptr+i))
        {
          if(min>(max-*(ptr+i)))
          {
              min=max-*(ptr+i);
              j=i;
          }
        }
    }
   return(*(ptr+j));
}
