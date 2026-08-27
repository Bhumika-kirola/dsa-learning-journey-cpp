#include <bits/stdc++.h>
using namespace std;


void name (int i, int n)
{
    if (i > n) return;
    else
    {
        cout << "Bhumika kirola" << endl;
        name(i+1, n);
    }
}

void num(int i, int n)
{
    if (i > n) return ;
    else
    {
        cout << i;
        num(i+1, n);
    }
}

// backtracing

void num_bac(int i, int n)
{
    if(i<1) return;
    else
    {
        num_bac(i-1, n);
        cout << i << " ";
    }
}

void  Revnum( int i, int n)
{
    if (i == n) return;
    else
    {
        cout << n-i << " ";
        Revnum(i+1, n);
    }
}

void rev(int i, int n)
{
    if (i > n) return;
    else
    {
        rev(i+1,n);
        cout << i << " "; 
    }
}

int main()
{
    int n;
    cin >> n;
    rev(1, n);
}