#include <stdio.h>

int main() {
    int deptChoice;
    int secChoice;

    printf("Select Department:\n");
    printf("1. Computer Science\n");
    printf("2. Information Technology\n");
    printf("3. Artificial Intelligence\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &deptChoice);

    switch (deptChoice) {
        case 1:
            printf("\nSelect Section:\n1. Section A\n2. Section B\nEnter choice (1-2): ");
            scanf("%d", &secChoice);
            switch (secChoice) {
                case 1:
                    printf("\nSelected: Computer Science - Section A\n");
                    break;
                case 2:
                    printf("\nSelected: Computer Science - Section B\n");
                    break;
                default:
                    printf("\nInvalid section choice!\n");
                    break;
            }
            break;

        case 2:
            printf("\nSelect Section:\n1. Section A\n2. Section B\nEnter choice (1-2): ");
            scanf("%d", &secChoice);
            switch (secChoice) {
                case 1:
                    printf("\nSelected: Information Technology - Section A\n");
                    break;
                case 2:
                    printf("\nSelected: Information Technology - Section B\n");
                    break;
                default:
                    printf("\nInvalid section choice!\n");
                    break;
            }
            break;

        case 3:
            printf("\nSelect Section:\n1. Section A\n2. Section B\nEnter choice (1-2): ");
            scanf("%d", &secChoice);
            switch (secChoice) {
                case 1:
                    printf("\nSelected: Artificial Intelligence - Section A\n");
                    break;
                case 2:
                    printf("\nSelected: Artificial Intelligence - Section B\n");
                    break;
                default:
                    printf("\nInvalid section choice!\n");
                    break;
            }
            break;

        default:
            printf("\nInvalid department choice!\n");
            break;
    }

    return 0;
}
