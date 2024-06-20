#include <iostream>
using namespace std;

int main() {
    int ticketPrice;

    cin >> ticketPrice;

    int num10 = ticketPrice / 10;
    ticketPrice %= 10;

    int num5 = ticketPrice / 5;
    ticketPrice %= 5;

    int num1 = ticketPrice;

    cout << "NT10=" << num10 << endl;
    cout << "NT5=" << num5 << endl;
    cout << "NT1=" << num1 << endl;

    return 0;
}
