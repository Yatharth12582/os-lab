#include <stdio.h>

int main() {
    int year, choice;

    do {
        printf("Enter a year: ");
        scanf("%d", &year);

        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("%d is a Leap Year.\n", year);
        } else {
            printf("%d is not a Leap Year.\n", year);
        }

        printf("Do you want to check another year? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    return 0;
}

