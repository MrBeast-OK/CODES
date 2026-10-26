#include <iostream>
#include <string.h>
using namespace std;
void xstrcpy(char *, char *);
main()
{
    char p[10] = "xyz";
    char q[10];
    xstrcpy(q, p);
    cout << q << endl;
}
void xstrcpy(char *a, char *b)
{
    while (*b != '\0')
    {
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}