#include <iostream>
using namespace std;

int main() {
    int pq[100], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter priority queue: ";
    for (int i = 0; i < n; i++)
        cin >> pq[i];

    if (n == 0) {
        cout << "Underflow";
        return 0;
    }
    cout << "Deleted element: " << pq[0] << endl;

    for (int i = 0; i < n - 1; i++)
        pq[i] = pq[i + 1];

    n--;

    cout << "Priority Queue after deletion: ";
    for (int i = 0; i < n; i++)
        cout << pq[i] << " ";

    return 0;
}