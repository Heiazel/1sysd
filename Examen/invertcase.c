#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void invertcase(char *s) {
    for (int i = 0; s!= '\0'; i++) {
        if (isalpha(s)) {
            if (islower(s)) {
                s = toupper(s);
            } else {
                s = tolower(s);
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc!= 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    invertcase(argv[1]);
    printf("%s\n", argv[1]);

    return 0;
}
