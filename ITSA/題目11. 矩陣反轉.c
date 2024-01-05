#include <stdlib.h>
#include <stdio.h>

int main() {
    int a, b, cnt=0;
    scanf("%d %d", &a, &b);
    int box[a][b];

    // 輸入矩陣元素
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &box[i][j]);
        }
    }

    // 輸出原始矩陣
    for (int j = 0; j < b; j++) {
            cnt=0;
        for (int i = 0; i < a; i++) {
            printf("%d", box[i][j]);
            cnt++;
            if(cnt < a)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
