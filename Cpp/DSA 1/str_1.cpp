#include <iostream>
using namespace std;
void display(char *);
main()
{
    char name[6] = "xyzab";
    display(name);
}
void display(char *p)
{
    while (*p != '\0')
    {
        cout << *p << endl;
        p++;
    }
}