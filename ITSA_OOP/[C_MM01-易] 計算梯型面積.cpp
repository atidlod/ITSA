#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int topBase, bottomBase, height;
    
    cin >> topBase >> bottomBase >> height;
    
    double area = (static_cast<double>(topBase) + bottomBase) * height / 2;
    cout << fixed << setprecision(1);
    cout << area << endl;
    
    return 0;
}
