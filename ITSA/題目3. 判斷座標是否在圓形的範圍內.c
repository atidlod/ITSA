#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);

    double distance = sqrt(x * x + y * y); // 計算點到原點的距離

    if (distance <= 100.0) {
        printf("inside\n");
    } else {
        printf("outside\n");
    }

    return 0;
}