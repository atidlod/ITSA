#include <stdio.h>
#include <string.h>

int main() {
    int input = 0;
    scanf("%d", &input);
    getchar(); 

    while (input--) {
        char s[1000];
        int sum = 0;
        fgets(s, sizeof(s), stdin);

        for (int i = 0; i < strlen(s); i++) {
            sum += (int)s[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
