//Missing Number
#include<stdio.h>
#include<conio.h>
int missingNumber(int*,int);
int main()
{
    int sz,i;
    printf("Enter array size\n");
    scanf("%d",&sz);
    int a[sz];
    printf("Enter elements\n");
    for(i=0;i<sz;i++)
        scanf("%d",&a[i]);
    printf("Missing number is %d",missingNumber(a,sz));
    getch();
    return 0;
}
int missingNumber(int* nums, int numsSize)
{
  int i,j;
  for(i=0;i<numsSize;i++)
  {
      for(j=0;j<numsSize;j++)
      {
          if(*(nums+j)==i)
            break;
      }
      if(j==numsSize)
        return i;
  }
  return numsSize;
}
