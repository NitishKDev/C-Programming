//used for formatted output
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    FILE *fp;
    fp=fopen("fprintf.txt","r");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    fscanf(fp,"%d%d%d",&a,&b,&c);
    printf("a=%d  b=%d  c=%d",a,b,c);
    fclose(fp);
    getch();
    return 0;
}

