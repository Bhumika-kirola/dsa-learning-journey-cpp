// Array in the main function have max range of 10^6 and in case of global the range is 10^7
#include<bits/stdc++.h>

using namespace std;


//-------------------------------------------------------largest element-----------------------------------------------------------------\

// BRUTE METHOD
void m(vector<int>& v, int n)
{
    sort(v.begin(), v.end());
    cout << v[n-1];
}
void method1(vector<int>& v, int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i; j < n; j++)
        {
            if (v[min] >= v[j]) min = j;
        }
        swap(v[min], v[i]);
    }
    cout << v[n-1];
}

int main()
{
    vector<int> vec;
    int n;
    cout << "Enter the elements in array you want to sort: ";
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        int element;
        cin >> element;
        vec.push_back(element);
    }
    m(vec, n);
}