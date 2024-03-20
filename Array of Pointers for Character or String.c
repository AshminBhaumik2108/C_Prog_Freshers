#include<stdio.h>
const int max = 4;
int main()
{
    char *names[4] = {"abc", "def", "pqr", "xyz"};
    int i = 0;
    for (i=0; i<max; i++)
    {
        printf("Address of names[%d] = %d\n", i, names[i]);
        printf("Value of names[%d] = %s\n", i, names[i]);
    }
    return 0;
}
