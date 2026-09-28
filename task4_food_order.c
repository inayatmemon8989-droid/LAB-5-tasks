#include <stdio.h>

int main() {
    int restaurantOpen, itemAvailable, balanceSufficient;

    printf("Is the restaurant open? (1 for Yes, 0 for No): ");
    scanf("%d", &restaurantOpen);

    printf("Is the item available? (1 for Yes, 0 for No): ");
    scanf("%d", &itemAvailable);

    printf("Is balance sufficient? (1 for Yes, 0 for No): ");
    scanf("%d", &balanceSufficient);

    if (restaurantOpen == 1) {
        if (itemAvailable == 1) {
            if (balanceSufficient == 1) {
                printf("Order placed successfully!\n");
            } else {
                printf("Order failed: Insufficient balance.\n");
            }
        } else {
            printf("Order failed: Item out of stock.\n");
        }
    } else {
        printf("Order failed: Restaurant is closed.\n");
    }

    return 0;
}
