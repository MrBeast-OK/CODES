#include <bits/stdc++.h>
using namespace std;

int main() {
  int marks;
char grade;
    cout << "Enter the marks: "<<endl;
    cin >> marks;

    switch (marks / 10) 
    {
        case 10:
        case 9:
        case 8:
        grade = 'A';
        break;
        case 7:
        case 6:
        grade = 'A';
        break;
        case 5:
        grade = 'B';
        break;
        case 4:
        grade = 'c';
        break;
        default:
            grade = 'F';
    }
    cout << "Grade: " << grade << endl;

    return 0;
}
