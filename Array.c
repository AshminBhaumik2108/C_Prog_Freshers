#include<stdio.h>

// Sized array:-
/*
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3};
    printf("First element of a is : %d", a[0]); // Positional Character.
    printf("\nFirst element address of a is : %d", a);// Address of the very
                                                      //first element of a.
    printf("\nFirst element address of a is : %d", &a);
    printf("\nFirst element address of a[1] is : %d", &a[1]);
    printf("\nFirst element of a[1] is : %d", a[2]);
} */

// Unsized Array :-

/*
int main()
{
   int b[] = {1, 2, 3, 4};
   char a[5];
   printf("\nFirst element address of a is : %d", sizeof(a));
   printf("\nFirst element address of b is : %d", sizeof(b));
   printf("\nFirst element address of a is : %d", sizeof(a)/sizeof(a[0]));
   printf("\nFirst element address of b is : %d", sizeof(b)/sizeof(b[0]));

}

int main()
{
int a[5], sum, avg, i;
printf("Enter the array elements : ");
for (i = 0; i<5; i++)
{
    printf("\nEnter element: ");
    scanf("%d ", &a[i]);
}
for (i = 0; i<5; i++)
{
    printf("%d ", a[i]);
    sum = sum + a[i];
}

printf("Sum is : %d", sum);
avg = sum/i;
printf("Avg is : %d", avg);
}*/

// finding max and min :-
/*
int main()
{
    int n, a[10], i, max, min;
    printf("\nEnter number of elements: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
     scanf("%d", &a[i]);
    }
    min = a[0];
    for (i=0; i<n; i++)
    {
     if (a[i]<min); min = a[i];
    }
    max = a[0];
    for (i=0; i<n; i++)
    {
        if (a[i]>max); max = a[i];
    }
    printf("Maximum is : %d and Minimum is : %d", max, min);

}*/

// Deleting an Element from array:-

#include<stdio.h>

int main()
{
    int a[100], i, n, pos, index;
    printf("How many no. to store in array: ");
    scanf("%d", &n); /// n=5
    printf("Enter the number\n");
    for(i = 0; i<=n-1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos); /// pos = 4
    index = pos - 1; /// index = 3
    for(i=index;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    printf("Contents of the array \n");
    for (i=0;i<n-1;i++)
    {
        printf("%d", a[i]);
        printf("\t");
    }
}
















