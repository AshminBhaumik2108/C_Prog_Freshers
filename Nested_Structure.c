#include<stdio.h>
struct Employee
{
    char ename[20]; int ssn; float salary;
    struct date
    {
        int date; int month; int year;
    }doj;
}; //emp = {"Ashmin", 1000, 100000.08, {21, 08, 2003}};

int main()
{
    struct Employee emp;
    printf("Enter the name, ssn, salary: ");
    scanf("%s %d %f",  &emp.ename, &emp.ssn, &emp.salary);
    printf("\nEnter the Date, Month and year of Joining : ");
    scanf("%d %d %d", &emp.doj.date, &emp.doj.month, &emp.doj.year);
    printf("\nEmployee Name: %s", emp.ename);
    printf("\nEmployee SSN: %d", emp.ssn);
    printf("\nEmployee Salary: %.2f", emp.salary);
    printf("\nEmployee DOJ: %d/%d/%d", emp.doj.date,emp.doj.month, emp.doj.year );
    return 0;

}
