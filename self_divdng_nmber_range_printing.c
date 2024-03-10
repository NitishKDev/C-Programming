//Self dividing numbers
#include<stdio.h>
#include<conio.h>
void self_list(int,int);
int main()
{
    int left,right,size;
    printf("Enter left and right\n");
    scanf("%d%d",&left,&right);
    self_list(left,right);
    getch();
    return 0;
}
void self_list(int l,int r)
{
  int i,num,m,cnt;
    for(i=l;i<=r;i++)
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
        printf("%d ",i);
    }
}
