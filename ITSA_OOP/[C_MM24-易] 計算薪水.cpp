#include <iostream>
#include <iomanip>
using namespace std;

double calculateSalary(int hours, int hourlyWage) {
    double salary = 0.0;

    if (hours <= 60) {
        salary = hours * hourlyWage;
    } else if (hours <= 120) {
        salary = 60 * hourlyWage + (hours - 60) * hourlyWage * 1.33;
    } else {
        salary = 60 * hourlyWage + 60 * hourlyWage * 1.33 + (hours - 120) * hourlyWage * 1.66;
    }

    return salary;
}

int main() {
    int hours, hourlyWage;
    cin >> hours >> hourlyWage;

    double salary = calculateSalary(hours, hourlyWage);
    cout << fixed << setprecision(1) << salary << endl;

    return 0;
}
