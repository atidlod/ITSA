#include <iostream>
using namespace std;

int main() {
    int i;

    cin >> i;

    if (i > 31) {
        cout << "Value of more than 31" << endl;
    } else {
        int result = 1 << i; 
        cout << result << endl;
    }

    return 0;
}
