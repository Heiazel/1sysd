#include <stdio.h>
#include <stdlib.h>

void display_histogram(int tab[], int size) {
    int max = 0;

    for (int i = 0; i < size; i++) {
        if (tab > max) {
            max = tab;
        }
    }

    for (int i = max; i > 0; i--) {
        for (int j = 0; j < size; j++) {
            if (tab[j] >= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int values[] = { 4, 9, 8, 2, 0, 1, 10, 5, 8 };

    display_histogram(values, 9);

    exit(EXIT_SUCCESS);
}
