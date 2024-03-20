#include<stdio.h>
struct book
{
    char name[20]; float price; int pages;

};
main()
{
    struct book b[50];
    int i;
    for (i=0; i<=22; i++)
    {
        printf("\n Enter Name, Prices, Pages of the books: %d", i+1);
        scanf("%s %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }
    for(i=0; i<=2; i++)
    {
        printf("\nDetails of the book: %d", i+1);
        printf("\n %s %f %d", b[i].name, b[i].price, b[i].pages);
    }
}
