#include <iostream>
using namespace std;

int sumBetween(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int total_sum = 0;
    for (int i = a; i <= b; ++i) {
        total_sum += i;
    }

    return total_sum;
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = sumBetween(a, b);
    cout << result << endl;

    return 0;
}
