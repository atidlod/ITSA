#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int topBase, height;
    
    cin >> topBase >> height;
    
    double area = topBase * height / 2;
    cout << fixed << setprecision(1);
    cout << area << endl;
    
    return 0;
}
