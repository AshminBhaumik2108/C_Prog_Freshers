// Linear Search:-

# include<stdio.h>
int main()
{
    int a[100],i,element,n,t=0,count = 0;
    printf("\nEnter the no. of Elements: ");
    scanf("%d", &n); ///n = 5
    if(n>0)
    {
        for(i=0;i<n;i++)
        {
            printf("\nEnter Element %d : ", i+1);
            scanf("%d", &a[i]);
        }
        printf("\nEnter the Elements to be searched: ");
        scanf("%d", &element); /// element = 80
        for(i=0;i<n;i++)
        {
            if(a[i] == element) /// a[3] 80 == 80
            {
                t=1; count++;
                printf("\nElement found at position %d", i+1);
                /// break;
            }
        }
        printf("\nTotal no. of Counts: %d", count)
        if(t==0)
        {

            printf("\nElement not Found");
        }}
        else
            printf("No. of elements found at position is 0");
}

