//used for formatted output
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    FILE *fp;
    fp=fopen("fprintf.txt","w");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    printf("enter two number");
    scanf("%d%d",&a,&b);
    fprintf(fp," %d %d %d",a,b,a+b);
    fclose(fp);
    getch();
    return 0;
}
