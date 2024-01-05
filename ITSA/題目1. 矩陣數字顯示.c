#include <stdio.h>

char display[5][10][6] = {
    {"*****", "    *", "*****", "*****", "*   *", "*****", "*****", "*****", "*****", "*****"},
    {"*   *", "    *", "    *", "    *", "*   *", "*    ", "*    ", "    *", "*   *", "*   *"},
    {"*   *", "    *", "*****", "*****", "*****", "*****", "*****", "    *", "*****", "*****"},
    {"*   *", "    *", "*    ", "    *", "    *", "    *", "*   *", "    *", "*   *", "    *"},
    {"*****", "    *", "*****", "*****", "    *", "*****", "*****", "    *", "*****", "    *"},
};

int main() {
    char s[10];
    scanf("%s", s);

    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 4; i++) {
            int d = s[i] - '0';

            if (i > 0) {
                printf(" ");
            }
            
            printf("%s", display[j][d]);
        }
        printf("\n");
    }

    return 0;
}
