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
    fp=fopen("binary.dat","rb");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }

    while(fread(&b1,sizeof(b1),1,fp)>0)
    printf("bookid=%d\nbook title=%s\nbook price=%f",b1.bookid,b1.title,b1.price);
    getch();
    return 0;
}
