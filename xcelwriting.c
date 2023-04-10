#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20];
    FILE *fp;
    fp=fopen("f1.xls","w");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    printf("enter title1");
    gets(str);
    fputs(str,fp);
    fputs("\t",fp);
     printf("enter title2");
    gets(str);
    fputs(str,fp);
    fputs("\n",fp);
    printf("enter name");
    gets(str);
    fputs(str,fp);
    fputs("\t",fp);
    printf("enter marks");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    getch();
    return 0;
}

