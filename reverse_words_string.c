//Reverse words in a given string
#include<stdio.h>
#include<conio.h>
int main()
{
    char s[100];
    int i,j,k;
    printf("Enter string\n");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    printf("\n");
    for(j=i-1;j>=0;j--)
    {
        if(s[j]==' ')
        {
            for(k=j+1;s[k]!=' ';k++)
            {
                 if(s[k]=='\0')
                    break;
                printf("%c",s[k]);

            }
            printf(" ");
        }
    }
    for(i=0;s[i]!=' ';i++)
        printf("%c",s[i]);
    return 0;
}
