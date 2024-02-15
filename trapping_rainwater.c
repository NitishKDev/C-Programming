//program to solve Trapping Rain Water problem.
#include<stdio.h>
#include<conio.h>
int jj=0,kk=0;
int sec_lar(int [],int);
int trap_rain(int [],int,int);
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
    printf("water can be trapped between the blocks during the rainy season is %d",trap_rain(a,len,fin));
    getch();
    return 0;
}
int sec_lar(int *ptr,int len)
{
    int max,i,min=9999;
    max=*ptr;
    for(i=1;i<len;i++)
        if(max<*(ptr+i))
            {
                max=*(ptr+i);
                kk=i;
            }
    for(i=0;i<len;i++)
    {
        if(max!=*(ptr+i))
        {
          if(min>(max-*(ptr+i)))
          {
              min=max-*(ptr+i);
              jj=i;
          }
        }
    }
   return(*(ptr+jj));
}
int trap_rain(int *ptr,int len,int cmp)
{
   int totalarea=0,i;
   if(kk<jj)
   {
      for(i=kk+1;i<jj;i++)
       if(*(ptr+i)<cmp)
           totalarea=totalarea+(cmp-*(ptr+i));
   }
   else{
        for(i=jj+1;i<kk;i++)
       if(*(ptr+i)<cmp)
           totalarea=totalarea+(cmp-*(ptr+i));
   }


   return(totalarea);
}
