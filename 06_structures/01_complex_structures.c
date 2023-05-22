
#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[40];
    char designation[40];
    char address[40];
    char phoneNo[30];
    float salary;
};

int main()
{
    struct Employee e1;
    e1.id = 1352;
    strcpy(e1.name,"Aditya");
    strcpy(e1.designation, "CEO");
    strcpy(e1.address, "Toronto Downtown, Ontario, Canada");
    strcpy(e1.phoneNo, "+1 3969 - 4352 - 1234");
    e1.salary = 350000;

    printf("Employee Code = %d\n", e1.id);
    printf("Employee Name = %s\n", e1.name);
    printf("Employee Designation = %s\n", e1.designation);
    printf("Employee Address = %s\n", e1.address);
    printf("Employee Phone Number = %s\n", e1.phoneNo);
    printf("Employee Salary = %.1f\n", e1.salary);
    
    struct Employee e2 = {7030, "Indraneel", "HOD", "New York, USA","+1 3969 - 4352 - 6969", 360000.0};
    printf("Employee Code = %d\n", e2.id);
    printf("Employee Name = %s\n", e2.name);
    printf("Employee Designation = %s\n", e2.designation);
    printf("Employee Address = %s\n", e2.address);
    printf("Employee Phone Number = %s\n", e2.phoneNo);
    printf("Employee Salary = %.1f\n", e2.salary);
    
    return 0;
}