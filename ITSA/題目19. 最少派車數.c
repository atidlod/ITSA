#include <stdio.h>

int main() {
    int inputN = 0;
    int t[24] = {0};

    scanf("%d", &inputN);

    for (int i = 0; i < inputN; i++) {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        for (int j = a - 1; j < b - 1; j++) {
            t[j]++;
        }
    }

    inputN = t[0];
    for (int i = 0; i < 24; i++) {
        if (inputN < t[i]) {
            inputN = t[i];
        }
    }

    printf("%d\n", inputN);
    return 0;
}
