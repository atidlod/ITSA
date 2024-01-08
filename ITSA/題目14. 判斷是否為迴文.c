#include <stdio.h>
#include <string.h>

int main()
{
    char input[100], output[100];
    int a = 1;

    scanf("%s", input);
    int length = strlen(input);

    for (int i = length - 1; i >= 0; i--) // 將字符串逆序output
    {
        output[length - 1 - i] = input[i];
    }

    for (int j = 0; j < length; j++) // 比較
    {
        if (input[j] != output[j]) { // 跳出
            a = 0;
            break;
        } else
            a = 1;
    }

    a ? printf("YES\n") : printf("NO\n"); // 輸出结果
    return 0;
}
