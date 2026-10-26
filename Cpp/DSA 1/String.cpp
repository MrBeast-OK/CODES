#include <iostream>
using namespace std;
int main()
{
    char name[5] = "XYZ";
    char *p;
    p = name;
    while (*p != '\0')
    {
        cout << *p << endl;
        p++;
    }
    return 0;
}