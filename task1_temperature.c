#include <stdio.h>

int main() {
    float temp;

    printf("Enter temp in Celsius: ");
    if (scanf("%f", &temp) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (temp < 15) {
        printf("Cold\n");
    } else if (temp <= 30) {
        printf("Normal\n");
    } else {
        printf("Hot\n");
    }

    return 0;
}
