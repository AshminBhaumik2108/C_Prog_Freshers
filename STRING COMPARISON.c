/// s1 = hello ,s2 = Hello then strcmp(s1, s2) == -ve i.e. s1<s2
//#include<stdio.h>
//#include<string.h>
/*
main()
{
    char a[100], b[100];
    printf("Enter the First String: ");
    gets(a);
    printf("\nEnter the Second String: ");
    gets(b);
    if (strcmp(a,b) == 0) printf("Entered String are Equal.\n");
    else if (strcmp(a,b)>0)
    {
        printf("Entered String are not Equal.\n");
        printf("\na is Greater");
    }

    else {printf("Entered string are nor equal.\n");
        printf("\n b is Greater");
    }
}

int main()
{
    char s1[20];
    printf("Enter String in Lowercase: ");
    gets(s1);
    strupr(s1);
    printf("\nAfter STRUPR: ");
    puts(s1);
}*/
/*
void lower_string(char[]);
int main()
{
    char string[100];
    printf("Enter a String to convert it into lowercase\n");
    gets(string);
    lower_string(string);
    printf("Enter string in lowercase is\" %s \"\n)
}*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100] = "Hello";
    printf("%s", strrev(s));
    return 0;
}

















