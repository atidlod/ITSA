#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool found = false; 

    for (int i = 1; i <= N; ++i) {
        if (i % 5 == 0 && i % 7 == 0) {
            if (found) {
                cout << " ";
            }
            cout << i;
            found = true;
        }
    }
    

    cout << endl;
    return 0;
}
