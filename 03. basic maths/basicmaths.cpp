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

void another_divisor(int x)
{
    vector <int> div;
    for(int i= 1; i<=sqrt(x); i++)
    {
        if ( x%i == 0)
        {
            div.push_back(i);
        }
        if ((x/i) != i)
        {
            div.push_back((x/i));
        }
    }

    sort(div.begin(), div.end());
    for(auto it: div)
    {
        cout << it << " ";
    }
}


void prime(int x)
{
    int cnt = 0;
    for (int i= 1; i <= x; i++)
    {
        if (x%i ==0) cnt +=1 ;
        else  cout << "";
    }
    (cnt == 2)? cout << "PRIME" : cout << "NOT PRIME";
}

void another_prime(int x)
{
    int cnt = 0;
    for (int i =1 ; i <= sqrt (x); i++)
    {
        if (x % i == 0)
        {
            cnt +=1;  
            if ((x/i) != i) cnt +=1 ;
        }

    }
    (cnt == 2)? cout << "PRIME" : cout << "NOT PRIME";
}


void hcf_gcd(int x, int y)
{
    vector <int> ls;
    int cnt = 0;
    for (int i = 1; i <= min(x, y); i++)
    {
        if (x%i == 0 && y%i == 0)
        {
            ls.push_back(i);
        } 
    }
    sort(ls.begin(), ls.end());
    cout << *(ls.end()-1);

}

void another_hcf_gcd(int x,int y)
{
    for (int i = min(x,y); i >=1; i--)
    {
        if (x%i ==0 && y%i == 0)
        {
            cout << i;
            break;
        }
    }
}

void equclidean_algorithm(int x, int y)
{
    int z;
    // accoring to this law if there are two number a and b so gcd(a,b) = gcd(a-b,b) where a>b
    // eg gcd(20, 15) = gcd(5,15) which is 5 so continuous subtraction is a%b
    (x>y)? x=x%y : y=y%x;

    for (int i = min(x,y); i >= 1; i--)
    {
        if (x%i == 0 && y%i ==0 )
        {
            cout << i;
            break;
        }
    }
}


int main()
{
    equclidean_algorithm(110, 130);
}