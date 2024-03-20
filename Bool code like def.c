/*
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) { /// Bool is a bolean return type..
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isPalindrome(int n) {
    int reverse = 0, temp = n;
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return n == reverse;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isPalindrome(n) && isPrime(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

#include<stdio.h>
void sum()
{
    int num1,num2,result;
    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1,&num2);
    result = num1+num2;
    printf("\nSum of two numbers: %d", result);
}
int main()
{
    printf("Call main Function\n");
    sum();
    printf("\nMain function Completed");


}*/

// No return type variable:

/*
#include<stdio.h>
void sum(int a, float b)
{
    float result;
    result = a+b;
    printf("\nSum of two numbers: %.2f", result);
}

void mul(int a, float b)
{
    float result;
    result = a*b;
    printf("\nMultiplication of two numbers: %.2f", result);
}

void sub(int a, float b)
{
    float result;
    result = a-b;
    printf("\nSubtraction of two numbers: %.2f", result);
}

void mod(int a, int b)
{
    float result;
    result = a%b;
    printf("\nModulous of two numbers: %.2f", result);
}
int main()
{
    int num1; float num2;
    printf("Call main Function\n");
    printf("Enter num1 and num2: ");
    scanf("%d %f", &num1,&num2);
    sum(num1, num2);
    mul(num1, num2);
    sub(num1, num2);
    mod(num1, num2);
    printf("\n\nMain function Completed");
}*/

// int return type:-
/*
#include<stdio.h>
int sum()
{
    int num1, num2;
    printf("Call main Function\n");
    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    return (num1+num2);
}

int main()
{
    int result;
    result = sum();
    printf("\nSum is: %d", result);
}
*/

// 7-3-23
/*
#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int num1, num2, result;
    printf("In main function");
    printf("\nEnter the values of num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    result = sum(num1, num2);   // Call Function of a program
    printf("\nBack in main");
    printf("\nSum is: %d", result);
}

#include<stdio.h>

int main()
{
    int a = 10, b = 20;
    b = b+a;
    a = b-a; // temp = a; a=b; b = temp
    b = b-a;
    printf("a = %d, b = %d", a,b);
}*/

// swap using call by value:-
/*
#include<stdio.h>
void swap(int a, int b)
{
    printf("\nBefore Swapping of: a = %d, b = %d", a, b);
    b = b+a;
    a = b-a;
    b = b-a;
    printf("\nAfter Swapping of: a = %d, b = %d", a, b);
}
int main()
{
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    printf("\nBefore Swapping of main: num1 = %d, num2 = %d", num1, num2);
    swap(num1, num2);
    printf("\nAfter swapping of main: num1 = %d, num2 = %d", num1, num2);
}*/

// Call by reference:-
/*
#include<stdio.h>
void swap(int *a, int *b)
{
    printf("\nBefore Swapping of: a = %d, b = %d", a, b); // a = 6422044, b = 6422040

    printf("\nAfter Swapping of: a = %d, b = %d", *a, *b); // a = 21, b = 34
}
int main()
{
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    printf("\nBefore Swapping of main: num1 = %d, num2 = %d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter swapping of main: num1 = %d, num2 = %d", num1, num2);
}*/
/*
#include<stdio.h>
void swap(int *a, int *b)
{
    printf("\nBefore Swapping of: a = %d, b = %d", *a, *b);
    *b = *b+*a;
    *a = *b-*a;
    *b = *b-*a;
    printf("\nAfter Swapping of: a = %d, b = %d", *a, *b);
}
int main()
{
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    printf("\nBefore Swapping of main: num1 = %d, num2 = %d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter swapping of main: num1 = %d, num2 = %d", num1, num2);
}*/

// using math function:-

#include<stdio.h>
#include<math.h>
/*
int main()
{
    int a = -2;
    float b = -2.5;
    printf("a = %d, b = %f", a,b);
    printf("\na = %d, b = %f", abs(a),fabs(b));
}*/

int main()
{
    int a = 2;
    printf("SQRT of a is: %f", sqrt(a));
    printf("\nSQRT of 4 is: %f", sqrt(4));
    float b = 2.99;
    printf("\nCeil value of b is: %f",ceil(b)); // Ceil value of b is: 3.000000 (Roundup)
    printf("\nFloor value of b is: %f",floor(b)); // Floor value of b is: 2.000000 (RoundDown)
    printf("log : %f", log10(10));
    printf("power of 2^3: %f", pow(2,3));

}


















