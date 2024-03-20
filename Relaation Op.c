// 03-02-2023
/*
#include<stdio.h>
int main()
{
    int a = 10, b = 20;

    printf("Greater than operator: %d", a>b);
    printf("\nLess than operator: %d", a<b);
    printf("\nLess than or equal to: %d", a<=b);
    printf("\nGreater than or equal to: %d", a>=b);
    printf("\nEquality Check: %d", a==b);
    printf("\nNot Equality Check: %d", a!=b);
    a = 30, b = 30;
    printf("\nEquality Check: %d", a==b);
    printf("\nNot Equality Check: %d", a!=b);
}

#include<stdio.h>
int main()
{
    int a = 30, b =20;
    if (a>b)
    {
        printf("a is greater than b");
        printf("\nHello!");
    }
    else if (a!=b)
    {
        printf("a is not equal to b");
        printf("\nHello!");
    }

    else
    {
      printf("a is less than b");
      printf("\nHello!");
    }

}

#include<stdio.h>
int main()
{
    int a = 30, b = 40;
    printf("Logical And: %d", a&&b);
    a = 0, b = 40;
    printf("\nLogical And: %d", a&&b);
    a = -10, b = 40;
    printf("\nLogical And: %d", a&&b);
    a = -10, b = 40;
    printf("\nLogical Or: %d", a||b);
}

#include<stdio.h>
int main()
{
    int a = 10;
    printf("Value of a: %d",a);
    a = -a;
    printf("\nValue of a: %d",a);
    a -= 1; /// a = a-1
    printf("\nValue of a: %d",a);
}*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    if (a>b && a>c)
        printf("a is greater");
    else if (b>a && b>c)
        printf("b is greater");
    else if (c>a && c>b)
        printf("c is greater");
    else if (a>b && b==c)
        printf("a is greater");
    else if (b>a && a==c)
        printf("b is greater");
    else if (c>b && a==b)
        printf("c is greater");
    else if (a>b && a==c)
        printf("a and c is greater");
    else if (b>a && b==c)
        printf("b and c is greater");
    else if (a>c && a==b)
        printf("a and b is greater");
    else if (b>c && b==a)
        printf("b and a is greater");
    else if (c>a && a==c)
        printf("c and a is greater");
    else if (c>b && c==b)
        printf("c and b is greater");
    else if (a==b && b==c)
        printf("All are equal");
    else
        printf("You have given a wrong Input");
}














