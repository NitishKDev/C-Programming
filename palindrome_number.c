//Palindrome Number
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int isPalindrome(int);
int main()
{
    int num1,res;
    printf("Enter number for palindrome checking\n");
    scanf("%d",&num1);
    res=isPalindrome(num1);
    res==1?printf("True"):printf("False");
    getch();
    return 0;
}
int isPalindrome(int x)
{
    int m,num2=0,num1=x;
    if(x<0)
        return 0;
    else
    {
       while(x!=0)
      {
        m=x%10;
        x=x/10;
        num2=num2*10+m;
      }
     if(num1==num2)
        return 1;
     else
        return 0;
    }

}
