#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int a;
    
    cin >> a;
    
    double ans = a*1.6;
    cout << fixed << setprecision(1);
    cout << ans << endl;
    
    return 0;
}
