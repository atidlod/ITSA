#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double celsius;

    cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5.0 + 32;

    cout << fixed << setprecision(1);

    cout << fahrenheit << endl;

    return 0;
}
