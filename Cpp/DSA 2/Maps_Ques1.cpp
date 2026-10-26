#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char> s2(brokenLetters.begin() , brokenLetters.end());
        int words = 0;
        set<char> s1;
        string w;
        for(int i = 0; i < text.size(); i++)
        {
            if (text[i] != ' ')
            {
                s1.insert(text[i]);
                w += text[i];
            }
            else
            {
                set<char>s3;
                set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()), less<char>());
                if (s3.size() == 0)
                {
                    words++;
                }
                s1.clear();
                s3.clear();
                w.clear();
            }
        }
        cout<<w;
        set<char>st(w.begin(), w.end());
        set<char>s3;
        set_intersection(st.begin(), st.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()), less<char>());
        if (s3.size() == 0)
        {
            words++;
        }
        return words;
    }
};