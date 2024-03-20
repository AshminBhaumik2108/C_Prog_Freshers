#include<stdio.h>
int main()
{
    char ch;
    FILE *fp1;
    FILE *fp2;
    fp1 = open("data1.txt", "r");
    fp2 = fopen("copy2.txt", "w");
    if (fp1 == NULL)
    {
        printf("File Doesn't Exist");
    }
    else
    {
        while((ch = fgetc(fp1)) != EOF)
        {
            printf("%c", ch);
            fputc(ch, fp2);
        }
        fclose(fp2);
        printf("File Copied.....");
    }
    fclose(fp1);
}
