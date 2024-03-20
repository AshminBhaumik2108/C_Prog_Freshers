/*
#include<stdio.h>
int main()

{
     short int age = 45;
     printf("The Garbage number is: %d",age);
     printf("\n the Memory occupied is: %d", sizeof(age));
     printf("\n the Memory occupied is: %d", sizeof(int));
     printf("\n the Memory occupied is: %d", sizeof(char));
     printf("\n the Memory occupied is: %d", sizeof(float));
     printf("\n the Memory occupied is: %d", sizeof(double));
     }
*/

// 27-01-2023
/*
#include<stdio.h>


int main()
{
    int a = 10;
    const int b = 20;
    printf("Value of a is: %d",a);
    printf("\nValue of b is: %d",b);
    a = 20;
    printf("\nValue of updated a is: %d",a);
    //b = 30;
    printf("\nValue of updated b is: %d",b);
    return 0;
}
*/

/*
 int main()
 {
     char name = 'h';
     char greeting = "Hello";
     printf("name = %c", name); /// "%c" will always show only one character and take the last value if
                                /// it is in single code and in double code it shows empty/Garbage value.
     printf("\nGreeting = %c", greeting);
     printf("\nGreeting = %s", greeting);
     return 0;
 }*/
/*
int main()
{
    int n1,n2,sum;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2); /// "&" represents ADDRESS OF.
    sum = n1+n2;
    printf("Total Sum: %d",sum);
    printf("Total Sum: %d",n2+n1);
    return 0;

}

int main()
{
    int principle,Time_period;
    float rate_of_interest;
    printf("Enter Principal value: ");
    scanf("%d",&principle);
    printf("Enter Rate of interest value: ");
    scanf("%f",&rate_of_interest);
    printf("Enter Time Period value: ");
    scanf("%d",&Time_period);
    printf("Simple Interest: %f",(principle*rate_of_interest*Time_period)/100);
    return 0;
}
/// "a++" - Postfix
/// "++a" - Prefix

{
    char sentence[30];
    scanf("%s", &sentence); // '%s' - String Variable
    printf("%s", sentence);
}

// "Null Character" -

char a = 'h';
    printf("a = %c", a);
    printf("\nSize of a is : %d", sizeof(a));
    char b = 'hello',c;
    printf("\nb = %c",b);
    printf("\nSize of b is : %d\n", sizeof(b));
    scanf("%c" , &c);
    printf("\nc = %c",c);
    printf("\nSize of c is : %d", sizeof(c));
*/

// 31-01-2023

/*

#include<stdio.h>
int main()
{
    char c[] = "hello", f[20];
    printf("\nc = %s", c);
    printf("\nSize of c: %d\n", sizeof(c));
    char d[60];
    scanf("%s", &d);
   // printf("String is: %s\n", d);
    gets(f);
    printf("String is: %s", f);

}

// 03-02-2023

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
}*/

// 28-02-2023

#include<stdio.h>
int main()
/*
{
    int a;
    printf("Enter the value of a: ");
    scanf("%%d", &a); /// Is giving a garvehe value since % meanse scip the input for scan.
    printf("a = %d", a);
}

{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("a = %d%%",a);
}

{
    char c;
    //scanf("%c", &c);
    c = getchar(); /// How much u give input it will print first character.
    printf("c = ");
    putchar(c);
}

{
    char c;
    //scanf("%c", &c);
    c = getche(); /// input is visible but in getch() it is not possible to see the input.
    printf("\nc = ");
    putch(c);
}*/

{
    char c[50];
    printf("Sen: ");
    gets(c);
    printf("%s\n",c);
    puts(c);
}





































