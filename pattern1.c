#include<stdio.h>
#include<conio.h>
void starp(int);
void abcdp(int);
void onetwo(int);
int main()
{
    int i,j,row;
    printf("enter number of rows you wanna print");
    scanf("%d",&row);
    starp(row);
    printf("\n");
    abcdp(row);
     printf("\n");
    onetwo(row);
    getch();
    return 0;
}
void starp(int x)
{
    int i,j;
  for(i=1;i<=x;i++)
       {
         for(j=1;j<=i;j++)
           {
             printf("*");
           }
           printf("\n");
       }

}
void abcdp(int x)
{
    int i,j;
  for(i=1;i<=x;i++)
       {
            char ch='A';
         for(j=1;j<=i;j++)
           {
             printf("%c",ch);
             ch++;
           }
           printf("\n");
       }

}
void onetwo(int x)
{
    int i,j;
  for(i=1;i<=x;i++)
       {
         for(j=1;j<=i;j++)
           {
             printf("%d",j);
           }
           printf("\n");
       }

}
