#include <bits/stdc++.h>

using namespace std;


void printnaturalnumberincrement(int n, int i)
{
    if (i > n) return;
    cout << i << " ";
    printnaturalnumberincrement(n, i+1);
}

void PrintNumberInDecreasingOrder(int i, int n)
{
    if (i == 0) return;
    cout << i << " ";
    PrintNumberInDecreasingOrder(i-1,n);
}

int SumOfNaturalNumber(int i, int n)
{
    cout << i << endl;
    if (i == n) return n;
    return i + SumOfNaturalNumber(i+1, n);
}

bool Prime_Or_Not(int i, int n)
{
   if (i >= n) return true;
   if (n%i == 0) return false;
   else 
   {
    Prime_Or_Not(i+1, n);
   }

}

int factorial(int n)
{
    if ( n <= 1) return 1;
    return n * factorial(n-1);
}

int NearPrimeNumer(int n)
{
    int num = n;
    if (n <= 2)
    {
        cout << "THERE IS NO PRIME NUMBER BEFORE THIS NUMBER" << endl;
        return n;
    }
    int ctr = 0;
    for (int i = n-1; i >= 2; i--)
    {
        if (n%i == 0) ctr += 1;

    }
    if (ctr == 0) 
    {
        return n;
    }
    else NearPrimeNumer(n-1);
}




int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << NearPrimeNumer(n-1);
}