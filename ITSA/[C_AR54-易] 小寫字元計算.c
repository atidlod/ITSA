#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char chars[n];

    for (int i = 0; i < n; i++) {
        scanf(" %c", &chars[i]);
    }

    int character[26] = {0};
    
    for (int i = 0; i < n; i++) {
        if (chars[i] >= 'a' && chars[i] <= 'z') {
            character[chars[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (character[i] != 0) {
            printf("%c %d\n", i + 'a', character[i]);
        }
    }

    return 0;
}
