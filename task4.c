#include <stdio.h>

int main() {
    int marks;

    printf("Enter student marks: ");
    scanf("%d", &marks);

    // Using ternary operator instead of if-else
    (marks >= 50) ? printf("Pass\n") : printf("Fail\n");

    return 0;
}
