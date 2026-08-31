#include <bits/stdc++.h>

using namespace std;

int main ()
{
    char ch ;
    string s;
    cin >> s;
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++) // according to the ascii value making the hash array a=97 and z = 122
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--)
    {
        char character;
        cin >> character;
        cout << hash[character - 'a'];
    }
}