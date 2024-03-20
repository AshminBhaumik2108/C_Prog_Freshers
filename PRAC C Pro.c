/* #include <stdio.h>
void main()
// How to add two number using input function in C Programing :-
/*
{
    int n1,n2,sum;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    sum = n1+n2;
    printf("Total Sum: %d",sum);
}*/
// How to use if and else in C Programing :-
/*
{
    int n1;
    printf("Enter n1: ");
    scanf("%d", &n1);
    if (n1%2==0){
        printf("Enter number is Even");
    }
    else {
        printf("Enter number is Odd");
    }
}
{
    int n1,n2;
    printf("Enter n1: ");
    scanf("%d",&n1);
    printf("Enter n2: ");
    scanf("%d",&n2);
    if ( n1%2 == 0 || n2%2 == 0)
    {
        printf("Enter number both are Even.");
    }
    else
    {
        printf("Enter number doesn't satisfy the condition.");
    }

}


int main()
{
    char ch, s[20], sen[20], h[50], j[50];
    scanf("%c", &ch);
    printf("%c\n",ch);
    scanf("%s", &s);
    printf("\n%s\n", s);
    scanf("\n");
    scanf("%[^\n]s", sen);
    printf("\n%s\n", sen);
    scanf("%[^\n]s", h);
    printf("\n%s", h);
    scanf("%[^\n]*c", &j);
    printf("\n%s", j);
    return 0;
}
*/
// Ternuary operator:
/*
#include <stdio.h>
 int main()
 {
     int age;
     printf("Enter your age: ");
     scanf("%d", &age);

     age >= 18 ? printf("I am approved for voting"): printf("I am not approved for voting");
     printf("\nThank You");
 }*/

// Conditional Statement "Switch" Statement:-
/*
#include<stdio.h>
int main()
{
    int day; /// if characters than char day;
    printf("Enter day number(1-7): ");
    scanf("%d", &day);
    switch (day)
    {
        case 1: printf("Monday\n"); /// case 'm': printf("Monday\n");
                break;
        case 2: printf("Tuesday\n");
                break;
        case 3: printf("Wednesday\n");
                break;
        case 4: printf("Thursday\n");
                break;
        case 5: printf("Friday\n");
                break;
        case 6: printf("Saturday\n");
                break;
        case 7: printf("Sunday\n");
                break;
        default: printf("Enter Valid Number\n");
    }
}*/

// Finding whether the character is in Small letter or in big letter:-
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any Character to check: ");
    scanf("%c", &ch);
    if (ch >="A" && ch <="Z")
        printf("This is an Upper Case character\n");
    else if (ch >="a" && ch <="z")
        printf("This is a Lower Case character\n");
    else
        printf("It's not an English alphabet\n");

}*/

// Using "for", "While", "do while" loop:-

// Using "for":-
/*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter your a range: ");
    scanf("%d", &a);
    for (int i=1; i<=a; i=i+1) // for(initialisation ; condition ; updation)
         printf("Hello World \n");
}

#include<stdio.h>
int main()
{
    for(char i='a'; i<='z'; i=i+1) // Using Variables Alphabet as range
        printf("%c\n",i);
}*/

// Using "While" loop:-
/*
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Entered range by User: ");
    scanf("%d", &n);
    while (i<=n)
    {
        printf("Hello World\n");
        i++;
    }
}*/

// Using "do While" loop:-
/*
#include<stdio.h>
int main()
{
    int i=1,n, s=0;
    printf("Entered range by User: ");
    scanf("%d", &n);
    do
    {
        s=s+i;
        i++;
    }while (i<=n);
    printf("%d", s);
}
*/

// To print multiplication table upto 10:

#include<stdio.h>
int main()
{
    int tab_of, mul;
    printf("Table of a number Given by user: ");
    scanf("%d", &tab_of);
    for( int i=1; i<=10; i++)
    {
        mul = tab_of*i;
        printf("%d x %d = %d\n",tab_of, i, mul);
    }
}


































