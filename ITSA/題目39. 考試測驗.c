#include <stdio.h>

int main() {
    int in;
    scanf("%d", &in);

    while (in--) {
        int p[4];
        p[3] = 0;

        for (int i = 0; i < 3; i++) {
            p[i] = 0;
            scanf("%d", &p[i]);
            p[3] += p[i];
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (p[i] < p[j]) {
                    int t = p[i];
                    p[i] = p[j];
                    p[j] = t;
                }
            }
        }

        if (p[0] >= 60) {
            printf("P\n");
        } else if (p[3] >= 220) {
            printf("P\n");
        } else if (p[3] < 220 && p[1] >= 60) {
            printf("M\n");
        } else if (p[3] < 199 && p[2] >= 80) {
            printf("M\n");
        } else {
            printf("F\n");
        }
    }
    return 0;
}
