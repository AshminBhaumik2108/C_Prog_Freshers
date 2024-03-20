#include<stdio.h>
int main()
{
    char str[50], str2[50];
    FILE *fp;
    gets(str);

    fp = fopen("data1.txt", "a");
    fputs(str, fp);
    printf("data written.....\n");
    fclose(fp);
    fp = fopen("data1.txt", "r");
    fgets(str2, 50, fp); // it can store 50 character
    puts(str2);
    fclose(fp);
}
