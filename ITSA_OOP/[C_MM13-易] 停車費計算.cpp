#include <iostream>
using namespace std;

int main() {
    int startHour, startMinute;
    int endHour, endMinute;

    cin >> startHour >> startMinute;
    cin >> endHour >> endMinute;

    int startTotalMinutes = startHour * 60 + startMinute;
    int endTotalMinutes = endHour * 60 + endMinute;
    int totalMinutes = endTotalMinutes - startTotalMinutes;

    int totalCost = 0;
    
    if (totalMinutes > 0) {
        if (totalMinutes > 4 * 60) {
            totalCost += ((totalMinutes - 4 * 60) + 29) / 30 * 60;
            totalMinutes = 4 * 60;
        }
        if (totalMinutes > 2 * 60) {
            totalCost += ((totalMinutes - 2 * 60) + 29) / 30 * 40;
            totalMinutes = 2 * 60;
        }
        totalCost += (totalMinutes + 29) / 30 * 30;
    }

    cout << totalCost << endl;

    return 0;
}
