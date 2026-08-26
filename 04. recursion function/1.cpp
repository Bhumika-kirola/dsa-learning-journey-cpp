#include <bits/stdc++.h>

using namespace std;


//what is a recursive function? : A function which calls itself when a specified condition (Base condition) is met.


void print1() // infinit recursion as there is no specified condition
{
    cout << '1';
    print1();
}


int cnt = 0;
void condition_function()
{
    if (cnt == 4) return ;
    else
    {
        cout << cnt ;
        cnt +=1;
        condition_function();
    }
}


int main()
{
    condition_function();

}