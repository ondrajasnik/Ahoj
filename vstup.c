#include "vstup.h"
#define ENTER '\n'
float enterRadius() {
    float r;
    int countOfChar;
    do {
        printf("Enter a radius:");
        scanf("%f", &r);
        countOfChar = 0;
        while (getchar() != ENTER) {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You have not typed a real number. Try again.\n");
        } else if (r <= 0) {
            printf("The number has to be positive. Try again.\n");
        }
    } while (countOfChar != 0 || r <= 0);
    return r;
}

int enterOption(int min, int max) {
    int option;
    int countOfChar;
    do {
        printf("Enter an option:");
        scanf("%d", &option);
        countOfChar = 0;
        while (getchar() != ENTER) {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You have not typed a whole number. Try again.\n");
        } else if (option < min || option > max) {
            printf("Choose an option from %d to %d. Try again.\n", min, max);
        }
    } while (countOfChar != 0 || option < min || option > max);
    return option;
}