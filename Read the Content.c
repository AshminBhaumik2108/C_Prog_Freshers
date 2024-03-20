#include<stdio.h>
int main()
{
    FILE *fp;
    int c;
    fp = fopen("K22BG.txt", "r");
    if(fp == NULL)
    {
        printf("Cannot open file");
    }
    else{
        while(1)
        {
            c = fgetc(fp);
            if (feof(fp))
            {
                break;
            }
            printf("%c", c);
        }
        fclose(fp);
        return (0);
    }
}
