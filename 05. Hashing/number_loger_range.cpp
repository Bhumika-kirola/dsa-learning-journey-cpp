#include <bits/stdc++.h>

using namespace std;


void map_hashing()
{
    int n;
    int ar;
    cout << "how many number you wanna store: ";
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar;
        array[i] =  ar;
    }
    map <int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[array[i]]++;
    }
    for (auto it: mpp)
    {
        cout << it.first << " : " << it.second << endl;
    }
}

void MapCharacter()
{
    string n;
    cin >> n;
    map < char, int > map1;
    for(int i = 0 ; i < n.size() ; i++)
    {
        map1[n[i]]++;
    }
    for( auto it : map1)
    {
        cout << it.first << " : " << it.second << endl;
    }
}



int main()
{
   MapCharacter(); 
}