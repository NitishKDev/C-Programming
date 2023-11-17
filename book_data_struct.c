#include<stdio.h>
#include<conio.h>
struct book{
int bookid;
char name[20];
float price;
};
struct book input(void);
void output(struct book);
int main()
{
    struct book b1;
    b1=input();
    output(b1);
    return 0;
}
struct book input()
{
    struct book b2;
    char strr[100];
    printf("Enter book details\nEnter book id\n");
    scanf("%d",&b2.bookid);
    printf("Enter book name\n");
    fflush(stdin);
    gets(b2.name);
    printf("Enter book book price\n");
    scanf("%f",&b2.price);
    return(b2);
}
output(struct book b3)
{
   printf("\nBook detail is\nBook id: %d\nBook name: %s\nBook price: %f",b3.bookid,b3.name,b3.price);
}



