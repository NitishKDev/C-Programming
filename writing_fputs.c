#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20];
    FILE *fp;
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    printf("enter string");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    getch();
    return 0;
}
