#include <stdio.h>

int main() {
    int choice, subChoice;

    printf("--- ATM Menu ---\n");
    printf("1. Balance Inquiry\n");
    printf("2. Cash Withdrawal\n");
    printf("3. Cash Deposit\n");
    printf("4. PIN Change\n");
    printf("Select operation (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\n-- Balance Inquiry --\n");
            printf("1. Savings Account\n2. Current Account\nSelect account type: ");
            scanf("%d", &subChoice);
            
            switch (subChoice) {
                case 1: printf("Balance Inquiry selected for Savings Account.\n"); break;
                case 2: printf("Balance Inquiry selected for Current Account.\n"); break;
                default: printf("Invalid account type selected.\n"); break;
            }
            break;

        case 2:
            printf("\n-- Cash Withdrawal --\n");
            printf("1. Savings Account\n2. Current Account\nSelect account type: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("Cash Withdrawal selected for Savings Account.\n"); break;
                case 2: printf("Cash Withdrawal selected for Current Account.\n"); break;
                default: printf("Invalid account type selected.\n"); break;
            }
            break;

        case 3:
            printf("\n-- Cash Deposit --\n");
            printf("1. Savings Account\n2. Current Account\nSelect account type: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("Cash Deposit selected for Savings Account.\n"); break;
                case 2: printf("Cash Deposit selected for Current Account.\n"); break;
                default: printf("Invalid account type selected.\n"); break;
            }
            break;

        case 4:
            printf("\n-- PIN Change --\n");
            printf("1. Confirm PIN Change\n2. Cancel\nSelect option: ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1: printf("Proceeding with PIN Change.\n"); break;
                case 2: printf("PIN Change cancelled.\n"); break;
                default: printf("Invalid selection.\n"); break;
            }
            break;

        default:
            printf("Invalid operation selected.\n");
            break;
    }

    return 0;
}
