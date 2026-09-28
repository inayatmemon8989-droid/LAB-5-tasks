#include <stdio.h>

int main() {
    int balance;

    printf("Enter remaining balance: ");
    if (scanf("%d", &balance) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (balance < 500) {
        printf("Low Balance\n");
    } else if (balance <= 2000) {
        printf("Sufficient Balance\n");
    } else {
        printf("Premium Balance\n");
    }

    return 0;
}
