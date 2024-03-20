#include<stdio.h>
/*
int main()
{
    int a = 42, b = 25;
    printf("Bitwise and: %d", a&b);
    printf("\nBitwise or: %d", a|b);
    printf("\nBitwise xor: %d", a^b);

    float b = 12.2222;
    b = (int)b;
    printf("%d", b);
}*/

int main()
{
    int age;
    printf("Enter your valid age: ");
    scanf("%d", &age);
    if (age>=18)
        printf("can cast vote");
    else
        printf("cannot cast vote");
}







