#include <iostream>
#include <cmath> // 用於 ceil 函數

using namespace std;

int main() {
    int distance;
    
    cin >> distance;

    const double huaSpeedInchesPerSec = 30.0;
    const double inchesToMeters = 0.0254;
    double huaSpeedMetersPerSec = huaSpeedInchesPerSec * inchesToMeters;

    const double yourSpeedMetersPerSec = 1.0;
    double relativeSpeed = yourSpeedMetersPerSec - huaSpeedMetersPerSec;

    int timeToCatchUp = static_cast<int>(ceil(distance / relativeSpeed));

    cout << timeToCatchUp << endl;

    return 0;
}
