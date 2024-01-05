#include <stdio.h>
#include <string.h>

int main() {
    char in[11];
    fgets(in, sizeof(in), stdin);
    in[10] = '\0'; // 以 null 结尾

    if (in[1] < '1' || in[1] > '2') {
        printf("WRONG!!!\n");
        return 0;
    }

    for (int i = 1; i < 9; i++) {
        if (in[i] < '0' || in[i] > '9') {
            printf("WRONG!!!\n");
            return 0;
        }
    }

    int p = 0, loc = 0;
    loc = (int)in[0];

    if (loc < 'A' || loc > 'Z') {
        printf("WRONG!!!\n");
        return 0;
    } else if (loc <= 'H') {
        loc -= 'A' - 10;
    } else if (loc == 'I') {
        loc = 34;
    } else if (loc > 'I' && loc <= 'N') {
        loc -= 'A' - 11;
    } else if (loc == 'O') {
        loc = 35;
    } else if ((loc > 'O' && loc <= 'V') || loc == 'Z') {
        loc -= 'A' - 12;
    } else if (loc == 'W') {
        loc = 32;
    } else if (loc > 'W' && loc <= 'Y') {
        loc -= 'A' - 13;
    }

    p = (loc / 10) + 9 * (loc % 10);

    for (int i = 1; i < 9; i++) {
        p += (9 - i) * ((int)in[i] - '0');
    }

    if (10 - (p % 10) != ((int)in[9] - '0')) {
        printf("WRONG!!!\n");
        return 0;
    } else {
        printf("CORRECT!!!\n");
        return 0;
    }
}
