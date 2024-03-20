#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Estate_Data
{
    char name[50], Address[200],phone_no[12], age[3], Type_Pro[2], siz_pro[2], amount[2];
    char file_name[50], aadhaar[50], DOB[50];
} pro_data;
pro_data data[100];

void register_property() {
    FILE *re_pro;
    re_pro = fopen("D:\\C_Property.txt", "w+");
    printf("Enter Customer Name: ");
    scanf(" %[^\n]s", data[0].name);
    fprintf(re_pro, "Name of Customer: %s\n", data[0].name);
    printf("Enter Customer Phone Number: ");
    scanf(" %[^\n]s", data[0].phone_no);
    fprintf(re_pro, "Phone Number: %s", data[0].phone_no);
    printf("Enter type of Property (Enter the number):\n ");
    printf("1. Luxury Mansion     2. Economy Mansion     3. Business class Mansion\n");
    scanf("%s", data[0].Type_Pro);
    fprintf(re_pro, "Q. Enter type of Property (Enter the number):\n");
    fprintf(re_pro, "1. Luxury Mansion     2. Economy Mansion     3. Business class Mansion\n");
    fprintf(re_pro, "Property Type: %s\n", data[0].Type_Pro);
    printf("Enter Size of Property (In Square Feet): \n");
    printf("1. Less than 5000    2. Between 5000 to 10,000    3. Greater than 10,000\n");
    scanf("%s", data[0].siz_pro);
    fprintf(re_pro, "Q. Enter Size of Property (In Square Feet): \n");
    fprintf(re_pro, "1. Less than 5000    2. Between 5000 to 10,000    3. Greater than 10,000\n");
    fprintf(re_pro, "Size of the Property: %s\n", data[0].siz_pro);
    printf("Enter Amount (In Rupee): \n");
    printf("1. Under 1_Crore    2. Between 1_Crore to 5_Crore    3. Above 5_Crore\n");
    scanf("%s", data[0].amount);
    fprintf(re_pro, "Enter Amount (In Rupee): \n");
    fprintf(re_pro, "1. Under 1_Crore    2. Between 1_Crore to 5_Crore    3. Above 5_Crore\n");
    fprintf(re_pro, "Amount: %s", data[0].amount);
    printf("\n       SUCCESSFULLY REGISTERED.....\n\n\n");
    fclose(re_pro);
}

void register_client() {
    FILE *re_cli;
    re_cli = fopen("D:\\C_Project.txt", "w+");
    printf("\n\n          Client Registration Portal :-\n\n");
    printf("Enter Name of Customer: ");
    scanf(" %[^\n]s", data[0].name);
    fprintf(re_cli, "Name: %s\n", data[0].name);
    printf("Enter Aadhaar Number: ");
    scanf(" %[^\n]s", data[0].aadhaar);
    fprintf(re_cli, "Aadhaar Number: %s\n", data[0].aadhaar);
    printf("Enter DOB (DD/MM/YYYY): ");
    scanf(" %[^\n]s", data[0].DOB);
    printf("Enter Age of the Customer: ");
    scanf(" %[^\n]s", data[0].age);
    printf("Enter Phone Number: ");
    scanf(" %[^\n]s", data[0].phone_no);
    fprintf(re_cli, "Age: %s\n", data[0].age);
    printf("Enter Address: ");
    scanf(" %[^\n]s", data[0].Address);
    fprintf(re_cli, "Address: %s\n", data[0].Address);
    printf("\n       SUCCESSFULLY REGISTERED.....\n");
    printf("%-40s\n\n\n", "");
    fclose(re_cli);

}

int delete_property() {

    int del = remove("D:\\C_Property.txt");
    if (!del)
       printf("\n\nThe file is Deleted successfully\n\n");
    else
       printf("\n\nThe file is not Deleted\n\n");
    return 0;
}

int contact_owner() {
    char ch, name[50];
    FILE *re_pro;
    re_pro = fopen("D:\\C_Project.txt", "r");
    printf("\n\n");
    printf("       CONTACT DETAILS: \n\n");
    do {
        ch = fgetc(re_pro);
        printf("%c", ch);
    } while (ch != EOF);
    printf("\n\n\n");
   return 0;
}

void client_review() {
    char review[10], desc[100];
    FILE *re_cli;
    re_cli = fopen("D:\\C_Project.txt", "a");
    printf("\n\n               Enter Review :- \n\n");
    printf("Put Stars: ");
    scanf(" %[^\n]s", &review);
    fprintf(re_cli, "\nREVIEW:-\n");
    fprintf(re_cli, "Stars Review: %s\n", review);
    printf("Enter Description: ");
    scanf(" %[^\n]s\n\n\n", &desc);
    fprintf(re_cli, "Description: %s\n", desc);
    fclose(re_cli);
}

int main() {
    int choice;
     printf("=====================================================================================================================\n");
     printf("%-40s%s", "", "Welcome To\n");
     printf("%-32s%s", "", "ASHMIN Group of Industries\n");
     printf("=====================================================================================================================\n");

    while (1) {
        printf("Enter your choice:\n");
        printf("1. Register property\n");
        printf("2. Register client\n");
        printf("3. Delete property details\n");
        printf("4. Contact owner\n");
        printf("5. Client review\n");
        printf("0. Exit\n");
        scanf("%d", &choice);
        if (choice == 0) printf("                    THANK YOU\n");

        switch(choice) {
            case 1:
                register_property();
                break;
            case 2:
                register_client();
                break;
            case 3:
                delete_property();
                break;
            case 4:
                contact_owner();
                break;
            case 5:
                client_review();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
