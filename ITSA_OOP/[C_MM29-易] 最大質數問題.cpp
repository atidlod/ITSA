#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i <= sqrt(num); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    int maxPrime = -1;
    for (int i = N - 1; i > 1; --i) {
        if (isPrime(i)) {
            maxPrime = i;
            break;
        }
    }

    if (maxPrime != -1) {
        cout << maxPrime << endl;
    }
    return 0;
}
