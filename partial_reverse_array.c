//partial reverse of array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char str[100];
    int i,len,len2,ii;
    printf("enter string\n");
    gets(str);
    for(ii=0;str[ii]!='\0';ii++);
    printf("length is %d\n",ii);
    if(ii%2!=0)
        {
       len=ii;
       len2=(ii/2)-1;
    for(i=len/2;str[i]!='\0';i++)
        printf("%c",str[i]);
    for(i=len2;i!=-1;i--)
        printf("%c",str[i]);

    }
    else
        printf("Error...string length is even");

    getch();
    return 0;
}
