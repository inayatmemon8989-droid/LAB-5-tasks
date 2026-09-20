#include <stdio.h> 

int main() {
    int age;
    int marks;

    // Get student details
    printf("Enter student age: ");
    scanf("%d", &age);

    printf("Enter student marks: ");
    scanf("%d", &marks);

    // Check age requirement first
    if (age >= 18) {
        // If age is valid, check marks
        if (marks >= 50) {
            printf("Eligible for Admission\n");
        } else {
            printf("Not Eligible: Marks are below 50.\n");
        }
    } else {
        printf("Not Eligible: Age must be 18 or above.\n");
    }

    return 0;
}
