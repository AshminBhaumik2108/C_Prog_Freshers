#include<stdio.h>
/*
long int fact(int n)
{
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
long int main()
{
    int n;
    printf("Enter Positive number: "); scanf("%d", &n);
    printf("Factorial of %d = %ld", n, fact(n));
    return 0;
}*/

// Auto Storage Class:
/*
int a = 10; // Global Variable
void sum(int i)
{
    printf("\nSum : %d", i);
}
int main()
{
    sum(a);
    auto int a = 20; // The address of the datatype is Auto. Auto is same as if we don't write it. // Local Variable
    printf("\nAddress of a is %p", &a);
    printf("\nDefault initial Value is : %d", a);
    sum(a);
}*/

// register address:-
/*
int main()
{

    register int a = 20;
    //printf("\nAddress of a is %p", &a);
    printf("\nDefault initial Value is : %d", a);

}*/

// Static :-
/*
void display()
{
    static int a = 0; // when the variable is changed in the last line it get fixed or preserved in the class itself.
    printf("\n%d", a);
    a += 5;
}

int main()
{
    display();
    display();
    display();
}*/

// Extern Storage class:

extern int a;
int main()
{
    printf("a = %d", a);
}
int a = 10;
















