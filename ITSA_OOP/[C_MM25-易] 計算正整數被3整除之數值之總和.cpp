#include <iostream>
using namespace std;

int sumDivisibleBy3(int N) {
    int total_sum = 0;
    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0) {
            total_sum += i;
        }
    }
    return total_sum;
}

int main() {
    int N;
    cin >> N;

    int result = sumDivisibleBy3(N);
    cout << result << endl;

    return 0;
}
