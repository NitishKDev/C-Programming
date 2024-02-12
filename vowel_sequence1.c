//write a program to get string from user and print digit in place of number of vowel occurrence.
//If it is three vowel continuously then print 3 in all vowel place.
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    int i,j,cnt=0,k;
    printf("Enter your string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            cnt++;
            str[i]=cnt;
            if(cnt>=2)
            {
                for(j=i-cnt+1;j!=i;j++)
                    str[j]=cnt;
            }
        }
        else
            cnt=0;
    }
    for(k=0;str[k]!='\0';k++)
    {
        if(str[k]>=0&&str[k]<=9)
            printf("%d",str[k]);
        else
            printf("%c",str[k]);
    }

    return 0;
}

