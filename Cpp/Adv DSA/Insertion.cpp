#include <iostream>
using namespace std;

int main() {
    int pq[100], n, x;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> pq[i];

    cout << "Enter element to insert: ";
    cin >> x;

    int i = n - 1;
    while (i >= 0 && pq[i] < x) {
        pq[i + 1] = pq[i];
        i--;
    }
    pq[i + 1] = x;
    n++;

    cout << "Priority Queue: ";
    for (i = 0; i < n; i++)
        cout << pq[i] << " ";

    return 0;
}