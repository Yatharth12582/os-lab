#include <stdio.h>

int main() {
    int year;
    int isLeap;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year condition converted to 0 or 1
    isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    switch (isLeap) {
        case 1:
            printf("%d is a Leap Year.\n", year);
            break;
        case 0:
            printf("%d is not a Leap Year.\n", year);
            break;
    }

    return 0;
}


