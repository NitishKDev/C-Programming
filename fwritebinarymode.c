#include<stdio.h>
#include<conio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("binary.dat","wb");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    printf("enter bookid,title and price");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
    getch();
    return 0;
}
