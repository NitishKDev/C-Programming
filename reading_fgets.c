#include<stdio.h>
#include<conio.h>
int main()
{
    char str[10];
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    while(fgets(str,5,fp)!=NULL)
        printf("%s",str);
        fclose(fp);
    getch();
    return 0;
}
