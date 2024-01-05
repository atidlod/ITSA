#include <stdio.h>

int main() {
    int start_hour, start_minute, end_hour, end_minute;
    int min;
    int count, total;

    scanf("%d", &start_hour);
    scanf("%d", &start_minute);
    scanf("%d", &end_hour);
    scanf("%d", &end_minute);

    min = (end_hour * 60 + end_minute) - (start_hour * 60 + start_minute);
    count = min / 30;

    if (count <= 4) {
        total = count * 30;
    } else if (count <= 8) {
        total = 120 + (count - 4) * 40;
    } else {
        total = 280 + (count - 8) * 60;
    }

    printf("%d\n", total);
    
    return 0;
}
