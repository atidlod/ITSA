#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num >= -128 && num <= 127) {
        for (int i = 7; i >= 0; i--) {
            int bit = (num >> i) & 1;
            printf("%d", bit);
        }
        printf("\n");
    }

    return 0;
}