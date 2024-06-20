#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int minutes;
    double cost;

    cin >> minutes;

    if (minutes <= 800) {
        cost = minutes * 0.9;
    } else if (minutes <= 1500) {
        cost = minutes * 0.9 * 0.9;
    } else {
        cost = minutes * 0.9 * 0.79;
    }

    cout << fixed << setprecision(1);

    cout << cost << endl;

    return 0;
}
