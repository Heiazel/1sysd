#include <stdio.h>
#include <stdlib.h>


int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i;
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <start> <end>\n", argv[0]);
        return 1;
    }

    int start = atoi(argv[1]);
    int end = atoi(argv[2]);

    if (start < 0 || end < 0) {
        printf("Les nombres doivent être positifs.\n");
        return 1;
    }

    for (int i = start; i <= end; i++) {
        printf("%d! = %d\n", i, factorial(i));
    }

    return 0;
}
