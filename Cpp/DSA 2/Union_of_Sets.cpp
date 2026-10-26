# include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s1 = {1, 2, 8, 6, 5};
    set<int> s2 = {4, 5, 2, 7, 3};
    set<int> union_set;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(union_set, union_set.begin()));
   // set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(union_set, union_set.begin()));
   // set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(union_set, union_set.begin()));
   // set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), inserter(union_set, union_set.begin()));
    cout << "Union of sets: ";
    for (int num : union_set) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}