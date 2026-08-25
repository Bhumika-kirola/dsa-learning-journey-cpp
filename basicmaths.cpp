// given the number n find out thte digit present in that number

#include <bits/stdc++.h>
using namespace std;


void countdigit(int x)
{
    //1 way to count digit
    int c;

    while(x>0)
    {
        c+=1;
        x = x/10;
    }
    cout << c;
}

void anotherway( int x)
{
    int c = log10(x) +1;
    cout << c;

}

void revr(int x)
{
    int rev;
    rev = 0;
    while(x>0)
    {
        rev = (rev*10)+(x%10);
        x = x/10;
    }
    cout << rev;
}

void palandrom (int x )
{
    int n = x;
    int rev;
    rev = 0;
    while(x>0)
    {
        rev = (rev*10)+(x%10);
        x = x/10;
    }
    (rev==n)? cout << "true" : cout << "false";
}

void armstrong(int x)
{
    int cube = 0;
    int n = x;
    while ( x > 0)
    {
        cube += (x%10)^3;
        x = x/10;
    }
    (n==cube)? cout << "yes it is palandrom" : cout << " it is not";
}

void divisor(int x)
{
    for (int i = 1; i <= x; i++)
    {
        (x%i == 0)? cout << i << endl : cout << "";
    }
}

int main()
{
    divisor(36);
}