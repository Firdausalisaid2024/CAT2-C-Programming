
#include <stdio.h>
#include <string.h>

// Define the structure named employee
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declare a variable of this structure type and initialize it
    struct employee emp;
    
    // Initialize each field with the given data
    strcpy(emp.name, "John Doe");
    emp.id = 12345;
    strcpy(emp.department, "Human Resources");
    emp.salary = 55000.50;
    strcpy(emp.email, "john.doe@company.com");

    // Print the values to verify
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
