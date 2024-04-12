#include<stdio.h>
#include<stdlib.h>

void display_histogram(int tab[], int size) {
    
    int max = tab[0];
    for (int i = 1; i < size; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    
    for (int i = 0; i <= max; i++) {
        
        int occurrences = 0;
        for (int j = 0; j < size; j++) {
            if (tab[j] == i) {
                occurrences++;
            }
        }
        
        
        printf("%2d |", i);
        for (int k = 0; k < occurrences; k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int values[] = { 4, 9, 8, 2, 0, 1, 10, 5, 8 };

    display_histogram(values, 9);

    exit(EXIT_SUCCESS);
}
