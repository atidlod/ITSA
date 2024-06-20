#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
