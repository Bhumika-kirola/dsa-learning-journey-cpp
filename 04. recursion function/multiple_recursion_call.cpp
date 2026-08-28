#include <bits/stdc++.h>

using namespace std;


int recursion (int n)
{
    if (n <= 1) return n;
    return recursion(n-1)+recursion(n-2);
}

int main()
{
    int y;
    cin >> y;
    for (int i = 0; i <= y; i++)
    {
        cout << recursion(i) << " ";
    }
}