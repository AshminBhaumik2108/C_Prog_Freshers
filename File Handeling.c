// #include<stdio.h>
/*
int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("text1.txt", "w");
    if (ptr == NULL)
    {
        printf("File Cannot be opened or file doesn't exist");
    }
    else
    {
        fputc('h', ptr);
        printf("Record saved");
    }
}

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("text1.txt", "a");
    if (ptr == NULL)
    {
        printf("File Cannot be opened or file doesn't exist");
    }
    else
    {
        fputc('e', ptr);
        printf("Record saved");
    }
    fclose(ptr);
}*/

/*
main()
{
    FILE *fp;
    char name[20];
    printf("Enter file name");
    scanf("%s", name);
    fp = fopen(name, "a");
    printf("Successful");
}*/

// Modes for Binary rb+ or r+b, wb+, wb, rb, etc......
/*
#include<stdio.h>
main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("text1.txt", "a");
    if (ptr == NULL)
        printf("File Cannot be opened or File doesn't Exist");
    else
    {
        fputc('k', ptr);
        printf("Record Saved");
    }
    fclose(ptr);
}*/


#include<stdio.h>
main()
{
    char ch;
    FILE *ptr;
    char filename[50];
    printf("Enter the name of the file along with exyension: ");
    scanf("%s", &filename);
    printf("\nEntered file name is: %s", filename);
    ptr = fopen(filename, "w");
    if (ptr == NULL)
        printf("File Cannot be opened or File doesn't Exist");
    else
    {
        fputc('A', ptr);
        printf("\nRecord Saved");
    }
    fclose(ptr);
}





















