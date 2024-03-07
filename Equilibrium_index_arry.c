//Equilibrium index of an array
#include<stdio.h>
#include<conio.h>
int equilibrium(int[], int);
int main()
{
    int sz,i;
    printf("Enter array size\n");
    scanf("%d",&sz);
    int a[sz];
    printf("Enter array elements\n");
    for(i=0;i<sz;i++)
        scanf("%d",&a[i]);
    printf("Equilibrium point is %d",equilibrium(a,sz));
    getch();
    return 0;
}
int equilibrium(int arr[],int szz)
{
    int ii,jj,s1,s2,i;
    if(szz==1)
        return(0);
    else
    {
      for(i=1;i<szz-1;i++)
       {
        jj=i,ii=i;
        s1=0,s2=0;
         while(ii>0)
          {
            s1=s1+arr[ii-1];
            ii--;
          }
         while(jj<szz-1)
          {
            s2=s2+arr[jj+1];
            jj++;
          }
         if(s1==s2)
         {
          return(i);
         }
      }
    }
    return(-1);
}
