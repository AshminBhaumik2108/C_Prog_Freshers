#include<stdio.h>
/*
int main()
{
    char a = 'h';
    char str[20];
    gets(str);
    puts(str);
    printf("Size of Str is: %d", sizeof(str));
    printf("\nSize of a is: %d", sizeof(a));
}*/


int main()
{
    char name[20], ch;
    int i = 0;
    printf("Enter name(Press Enter to stop): ");
    while(ch != '\n')
    {
        ch = getchar();
        name[i] = ch;
        i++;
    }
    name[i] = '\0';
    printf("Name : %s", name);
    return 0;
}















