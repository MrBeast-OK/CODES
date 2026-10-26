#include<iostream>
using namespace std;
void reverse(char *);
int main()
{
    char name[10] = "abcde";
    reverse(name);
    cout<<name;
}
void reverse(char *x)
{
    char *y;
    y = x;
    while (*x!='\0')
    {
        x++;
    }
    x--;
    while (y<x)
    {
        char z;
        z = *x;
        *x = *y;
        *y = z;
        y++;
        x--;
    }
}