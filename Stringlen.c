#include<stdio.h>
#include<string.h>
/*
int main()
{
    char str[] = "Abhi abhi";
    int length;
    length = strlen(str);
    printf("Number of Characters: %d", length);
    printf("\nSize of str is: %d", sizeof(str));

}
*/
int main()
{
    char a[20];
    int i, count = 0;
    printf("Enter String: ");
    gets(a);
    i = 0;
    while(a[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Length of string is: ");
    printf("%d", count);
}





// strcpy() , strncpy



