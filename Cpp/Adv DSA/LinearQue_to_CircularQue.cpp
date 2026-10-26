#include <iostream>
using namespace std;

#define N 5

// Linear Queue
int q[N], front = -1, rear = -1;

void enqueue(int x) {
    if (rear == N - 1)
        cout << "Overflow\n";
    else {
        if (front == -1) front = 0;
        q[++rear] = x;
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        cout << "Underflow\n";
    else
        front++;
}

void display() {
    for (int i = front; i <= rear; i++)
        cout << q[i] << " ";
    cout << endl;
}

// Circular Queue
int cq[N], f = -1, r = -1;

void cenqueue(int x) {
    if ((r + 1) % N == f)
        cout << "Overflow\n";
    else {
        if (f == -1)
            f = r = 0;
        else
            r = (r + 1) % N;

        cq[r] = x;
    }
}

void cdequeue() {
    if (f == -1)
        cout << "Underflow\n";
    else if (f == r)
        f = r = -1;
    else
        f = (f + 1) % N;
}

void cdisplay() {
    if (f == -1) return;

    int i = f;
    while (true) {
        cout << cq[i] << " ";
        if (i == r) break;
        i = (i + 1) % N;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();

    cout << "Queue: ";
    display();

    cenqueue(10);
    cenqueue(20);
    cenqueue(30);
    cdequeue();
    cenqueue(40);

    cout << "Circular Queue: ";
    cdisplay();

    return 0;
}