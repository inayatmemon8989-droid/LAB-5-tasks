#include <stdio.h>

int main() {
    int appointment, doctorAvailable, registrationCompleted;

    printf("Enter appointment status (1 for Yes, 0 for No): ");
    scanf("%d", &appointment);

    printf("Enter doctor availability (1 for Yes, 0 for No): ");
    scanf("%d", &doctorAvailable);

    printf("Enter registration status (1 for Yes, 0 for No): ");
    scanf("%d", &registrationCompleted);

    if (appointment == 1) {
        if (doctorAvailable == 1) {
            if (registrationCompleted == 1) {
                printf("Patient can meet the doctor.\n");
            } else {
                printf("Cannot meet doctor: Registration incomplete.\n");
            }
        } else {
            printf("Cannot meet doctor: Doctor is unavailable.\n");
        }
    } else {
        printf("Cannot meet doctor: No appointment booked.\n");
    }

    return 0;
}
