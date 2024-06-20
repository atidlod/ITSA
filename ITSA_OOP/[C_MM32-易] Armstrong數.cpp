#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int original_num = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }

    return sum == original_num;
}

int main() {
    int num;
    cin >> num;

    if (num >= 100 && num <= 999) {
        if (isArmstrong(num)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
