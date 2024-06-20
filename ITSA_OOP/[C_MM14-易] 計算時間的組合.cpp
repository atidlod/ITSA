#include <iostream>
using namespace std;

int main() {
    const int SECONDS_IN_A_MINUTE = 60;
    const int MINUTES_IN_AN_HOUR = 60;
    const int HOURS_IN_A_DAY = 24;

    int totalSeconds;
    cin >> totalSeconds;

    int days = totalSeconds / (SECONDS_IN_A_MINUTE * MINUTES_IN_AN_HOUR * HOURS_IN_A_DAY);
    totalSeconds %= SECONDS_IN_A_MINUTE * MINUTES_IN_AN_HOUR * HOURS_IN_A_DAY;

    int hours = totalSeconds / (SECONDS_IN_A_MINUTE * MINUTES_IN_AN_HOUR);
    totalSeconds %= SECONDS_IN_A_MINUTE * MINUTES_IN_AN_HOUR;

    int minutes = totalSeconds / SECONDS_IN_A_MINUTE;
    int seconds = totalSeconds % SECONDS_IN_A_MINUTE;

    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;

    return 0;
}
