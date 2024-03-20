#include<stdio.h>
int main()
{
    int a = 10, b = 20, c;
    c = a++;
    printf("\nValue c: %d", c);
    printf("\nValue a: %d", a);
    printf("\nValue a: %d", a++);
    printf("\nValue a: %d", a);
    c = --a;
    printf("\nValue c: %d", c);
    printf("\nValue a: %d", a);
    printf("\nValue a: %d", --a);
    printf("\nValue a: %d", a);
}
