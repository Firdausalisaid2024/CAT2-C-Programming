
#include <stdio.h>
#include <string.h>

// Define the structure
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declare and initialize the structure variable
    struct employee emp = {
        "John Doe",
        12345,
        "Human Resources",
        55000.50,
        "john.doe@company.com"
    };

    // Output the initialized data
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}

