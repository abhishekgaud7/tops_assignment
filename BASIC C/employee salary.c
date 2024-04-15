#include <stdio.h>

int main() {
    char names[5][10];  // Arrays to store 5 employees' names
    float salaries[5], total_salary = 0;  // Arrays to store 5 employees' salaries and total salary

    // Accept names and salaries of 5 employees
    for(int i=0;i<5;i++) {
        printf("Enter name of employee %d: ", i+1);
        scanf("%s", names[i]);

        printf("Enter salary of employee %d: ", i+1);
        scanf("%f", &salaries[i]);

        total_salary += salaries[i];  // Add current employee's salary to total salary
    }

    // Calculate and print average salary
    float average_salary = total_salary / 5;
    printf("Average salary: %.2f\n", average_salary);

    // Print total salary
    printf("Total salary: %.2f\n", total_salary);

    return 0;
}
