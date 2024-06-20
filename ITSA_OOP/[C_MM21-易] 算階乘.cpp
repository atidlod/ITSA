#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n <= 0 || n >= 20) {
        return 1;
    }

    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    cout << factorial << endl;

    return 0;
}
