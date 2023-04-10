#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char s[20];
    FILE *fp;
    fp=fopen("f1.txt","w");
    if(fp==NULL)
        {
            printf("file cannot open");
            exit(1);
        }
        printf("enter string");
        gets(s);
        for(i=0;i<strlen(s);i++)
          fputc(s[i],fp);
    fclose(fp);
    getch();
    return 0;
}
