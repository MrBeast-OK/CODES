#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float basicSalary, da, hra, grossSalary, pf, netSalary;

    cout << "Enter the basic salary: ";
    cin >> basicSalary;


    da = 0.25 * basicSalary;
    hra = 0.15 * basicSalary;

    grossSalary = basicSalary + da + hra;

    pf = 0.10f * grossSalary;

    netSalary = grossSalary - pf;

    cout << fixed << setprecision(2);
    cout << "\n--- Salary Breakdown ---\n";
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Dearness Allowance (25%): " << da << endl;
    cout << "House Rent Allowance (15%): " << hra << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Provident Fund Deduction (10%): " << pf << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}