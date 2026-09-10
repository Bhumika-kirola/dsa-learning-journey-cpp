#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool positive_sign = true;
    int digit = 0;
    int sum = 0;
    while (n)
    {
        int digit = n % 10;
        positive_sign != positive_sign;
        sum += digit*(positive_sign ? 1 : -1);
        n /= 10;

    }

    cout << endl;
}