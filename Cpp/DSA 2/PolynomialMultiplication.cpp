#include <iostream>
using namespace std;

int main() {
    int m, n;

    // Input number of terms
    cout << "Enter number of terms in first polynomial: ";
    cin >> m;

    int A[100];

    cout << "Enter coefficients of first polynomial:\n";
    for (int i = 0; i < m; i++) {
        cin >> A[i];
    }

    cout << "Enter number of terms in second polynomial: ";
    cin >> n;

    int B[100];

    cout << "Enter coefficients of second polynomial:\n";
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Result array
    int C[200];

    // Initialize result array with 0
    for (int i = 0; i < m + n - 1; i++) {
        C[i] = 0;
    }

    // Multiply polynomials
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i + j] = C[i + j] + (A[i] * B[j]);
        }
    }

    // Display result
    cout << "Resultant polynomial coefficients:\n";

    for (int i = 0; i < m + n - 1; i++) {
        cout << C[i] << " ";
    }

    return 0;
}