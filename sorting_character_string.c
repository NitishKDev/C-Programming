//Program to sort the given character from the string in the dictionary order.
#include<conio.h>
#include<stdio.h>
void bubble_asc(char [],int);
void display(char[],int);
int main()
{
    int len,i;
    char s[50];
    printf("Enter string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    len=i;
    bubble_asc(s,len);
    display(s,len);
    getch();
    return 0;
}
void bubble_asc(char *ptr,int len)
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
void display(char *ptrq,int lenw)
{
     int i;
     printf("Sorted String:\n");
     for(i=0;i<=lenw;i++)
        printf("%c",*(ptrq+i));
}
