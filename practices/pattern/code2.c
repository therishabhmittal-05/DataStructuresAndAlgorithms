#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        int num_spaces = 9 - i;
        int num_asterisks = 2 * i - 1;
        for (int j = 1; j <= num_spaces; j++) {
            printf(" ");
        }
        for (int j = 1; j <= num_asterisks; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
bubblesort
