#include <iostream>
#include <string.h>
using namespace std;
void xstrcat(char *, char *);
main()
{
    char p[20] = "xyz";
    char q[10] = "abc";
    xstrcat(p, q);
    cout << p << endl;
}
void xstrcat(char *a, char *b)
{
    while (*a != '\0')
    {
        a++;
    }
    while (*b != '\0')
    {
        *a = *b;
        a++;
        b++;
    }
    *a = '\0';
}