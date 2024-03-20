// TO FIND PRIME NUMBBER OR NOT
/*
#include<stdio.h>
#include<stdbool.h>
bool Prime(int n)
{
    if (n<=1) {return false;}
    else
    {
        int s = 0;
        for(int i = 2; i<=n; i++)
        {
            if (n%i==0) {s++;}
        }
        if (s>1) {return false;}
    }
    return true;
}
int main()
{
    int a;
    printf("Enter any number to find prime: ");
    scanf("%d", &a);
    int Prime_Number = Prime(a);
    Prime_Number == 1? printf("Prime") : printf("Not Prime");
}*/

// TO PRINT ADDRESS OF SOME NUMBERS FROM RAM :-
/*
#include<stdio.h>
int Address_swap(int *a, int *b)
{
    printf("\nAddress of two numbers A & B are %d & %d respectively", a,b);
    printf("\nA = %d and B = %d", *a, *b);
}
int main()
{
    int a,b;
    printf("Enter two numbers A and B: ");
    scanf("%d %d", &a, &b);
    printf("\nTwo numbers before swap are A = %d and B = %d", a, b);
    Address_swap(&a, &b);
    printf("\nTwo numbers after swap are A = %d and B = %d", a, b);
}*/

// TO USE <MATH.H> IN CODE AND USING LOG, FLOOR, CEIL, POW & SQRT FUNCTION :-
/*
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("Enter any two numbers A and B: ");
    scanf("%d %d", &a, &b);
    printf("Square Root of A = %d and B = %d", sqrt(a), sqrt(b));
    printf("\nCeil of A = %f and B = %f", ceil(a), ceil(b));
    printf("\nFloor of A = %f and B = %f", floor(a), floor(b));
}*/

#include <stdio.h>
void show();
int main()
{
    show();
    printf("hello");
}
void show()
{
   printf("World");
    main();
}



















































