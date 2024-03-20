#include<stdio.h>
/*
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("\nValue of a is: %d", a);
    printf("\nValue of ptr is: %d", ptr);
    printf("\nAddress of a is: %d", &a);
    printf("\nAddress of ptr is: %d", &ptr);
    printf("\nValue in ptr is: %d", *ptr);
    printf("\nValue in &a is: %d", *&a);
    printf("\nValue of using &a is: %d", *(&ptr));
}

int main()
{
   int a = 10, b = 20;
   int arr[] = {01, 20, 30, 40, 5, 6, 7, 8, 9};
   int *pl, *p2;
   p1 = arr; /// p1 = &arr[7]
   printf("\n%d", *p1);
   printf("\nAddress is: %d", p1);
   ++p1;
   printf("\n%d", *p1);
   printf("\nAddress is: %d", p1);
   p1--;
   printf("\n%d", *p1);
   printf("\nAddress is: %d", p1);

   p1 = p1+2;
   printf("\n%d", *p1);
   printf("\nAddress is: %d", p1);

   p2 = &arr[4];
   printf("\n%d", *p2);
   printf("\nSubtract is: %d", p2-p1);
   while(p1<=p2)
   {
       printf("\nCompare: %d", *p1);
       p1++;
   }

}*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    free(ptr);
    ptr = NULL;
}

















