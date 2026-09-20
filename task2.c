#include <stdio.h>

int main() {
    int hasCNIC;
    int passedTest;

    // Ask for CNIC status
    printf("Do you have a CNIC? (1 = Yes, 0 = No): ");
    scanf("%d", &hasCNIC);

    if (hasCNIC == 1) {
        // Ask for test status if user has a CNIC
        printf("Have you passed the driving test? (1 = Yes, 0 = No): ");
        scanf("%d", &passedTest);

        if (passedTest == 1) {
            printf("License Can Be Issued\n");
        } else {
            printf("License Cannot Be Issued: Driving test not passed.\n");
        }
    } else {
        printf("License Cannot Be Issued: You must have a CNIC.\n");
    }

    return 0;
}
