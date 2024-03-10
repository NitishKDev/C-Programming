//Self dividing numbers
#include<stdio.h>
#include<conio.h>
int* self_list(int,int,int*);
int main()
{
    int left,right,size,*p,i=0;
    printf("Enter left and right\n");
    scanf("%d%d",&left,&right);
    p=self_list(left,right,&size);
    while(i<size)
    {
        printf("%d ",*(p+i));
        i++;
        }
    getch();
    return 0;
}
int* self_list(int left,int right,int *returnSize)
{
  int j=0;
  int *ptr=(int*)malloc((right-left+1)*sizeof(int));
  int i,num,m,cnt;
    for(i=left;i<=right;i++)
    {
        num=i;
        cnt=0;
     while(num!=0)
     {
         num=num/10;
         cnt++;
     }
     num=i;
     while(cnt>=1)
     {
        m=num%10;
        if(m==0||i%m!=0)
            break;
        num=num/10;
         cnt--;
     }
     if(cnt==0)
        {
          *(ptr+j)=i;
          j++;
        }
    }
    *returnSize=j;
    return ptr;
}











