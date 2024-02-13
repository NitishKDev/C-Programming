//Program to Check whether two Strings are anagram of each other.
#include<conio.h>
#include<stdio.h>
void sort1(char [],int);
void check_ana(char [],char [],int);
int main()
{
    int len1,len2,i,j;
    char s1[50],s2[50];
    printf("Enter 1st string\n");
    gets(s1);
    printf("Enter 2nd string\n");
    gets(s2);
    for(i=0;s1[i]!='\0';i++);
    len1=i;
    for(j=0;s2[j]!='\0';j++);
    len2=j;
    if(len1!=len2)
        printf("Not Anagram\n");
    else
    {
       sort1(s1,len1);
       sort1(s2,len2);
       check_ana(s1,s2,len1);
    }

    getch();
    return 0;
}
void sort1(char *ptr,int len)
{
    int i,j,t;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                t=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=t;
            }
        }
    }

}
void check_ana(char *ptr1,char *ptr2,int len)
{
   int i;
   for(i=0;i<len;i++)
   {
       if(*(ptr1+i)!=*(ptr2+i))
       {
           printf("Not Anagram\n");
           break;
       }
   }
   if(i==len)
    printf("Anagram");

}

