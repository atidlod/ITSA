#include <stdio.h>
#include <float.h>

int main() {
    float numbers[10];
    float minValue = FLT_MAX; // 初始最小值为浮点数的最大值
    float maxValue = FLT_MIN; // 初始最大值为浮点数的最小值

    // 读取十个数
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numbers[i]);

        // 更新最小值和最大值
        if (numbers[i] < minValue) {
            minValue = numbers[i];
        }
        if (numbers[i] > maxValue) {
            maxValue = numbers[i];
        }
    }

    // 输出最小值和最大值，小数点后两位
    printf("maximum:%.2f\n", minValue);
    printf("minimum:%.2f\n", maxValue);

    return 0;
}
