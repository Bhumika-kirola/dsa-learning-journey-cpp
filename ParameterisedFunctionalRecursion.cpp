#include <bits/stdc++.h>
using namespace std;


// summision of first n numbers

void summision1(int i, int sum)
{
    if(i<1)
    {
        cout << sum;
        return;
    }
    else summision1(i-1, sum+i);
}

int summision2(int n)
{
    if(n == 0) return 0;
    else
    {
        return (n + summision2(n-1));
    }
}


int factorial(int n)
{
    if(n == 1) return 1;
    else
    {
       return n*factorial(n-1);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n);

}