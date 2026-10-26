#include <iostream>
#include <string.h>
using namespace std;
main()
{
    char p[10] = "xyz";
    int y;
    y = strlen(p);
    cout << y << endl;
}
int xstrlen(char *p)
{
    int c = 0;
    while (*p != '\0')
    {
        c++;
        p++;
    }
    return c;
}