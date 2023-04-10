#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    c=fgetc(fp);
    while(!feof(fp))
    {
    printf("%c",c);
    c=fgetc(fp);
    }
    fclose(fp);
    getch();
    return 0;
}
