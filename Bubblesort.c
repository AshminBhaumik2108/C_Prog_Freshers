// Implementing Bubbleshot :-

#include<stdio.h>
int main()
{
    int a[50],n,i,j;
    printf("\nEnter ingeger value for the total no. of the elements to be sorted: ");
    scanf("%d", &n); /// n=5
    printf("Enter array elements: \n");
    for( i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        int last = (n-1)-i;
        for (j=0;j<last;j++)
        {
            if (a[j]>a[j+1])
            {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("Array in Ascending Order: ");
    for(i=0;i<n; i++)
        printf("\n%d", a[i]);
    return 0;
}
