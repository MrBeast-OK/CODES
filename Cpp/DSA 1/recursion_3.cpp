#include <bits/stdc++.h>
using namespace std;
void table ( int n, int x ) {
   if ( x == 11  ) {     
   }
   else {
       cout << n * x << endl ;
       table ( n, x + 1 );
   }
}
int main() {
   int x;
   cin >> x;
   table ( x, 1 );
}