#include <stdio.h>

int main() {
    int i, j, n = 4; // n represents the number of rows in the pattern

    for (i = 0; i < n; i++) {
        // Print spaces before the first asterisk in each row
        for (j = 0; j < (n - i - 1); j++) {
            printf("  ");
        }

        // Print the first asterisk in each row
        printf("*");

        // Print spaces between the two asterisks in each row
        for (j = 0; j < (2 * i - 1); j++) {
            printf("  ");
        }

        // Print the second asterisk in each row, except for the middle row
        if (i != 0) {
            printf(" *");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

