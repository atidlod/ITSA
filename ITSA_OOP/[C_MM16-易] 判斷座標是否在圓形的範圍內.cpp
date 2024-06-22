#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y;
    const int radius = 100;

    while (cin >> x >> y) {
        int distanceSquared = x * x + y * y;
        int radiusSquared = radius * radius;

        if (distanceSquared <= radiusSquared) {
            cout << "inside" << endl;
        } else {
            cout << "outside" << endl;
        }
    }

    return 0;
}
