#include <bits/stdc++.h>

using namespace std;


void swapping(vector<int>& arr) //it is by vector
{
    int n = arr.size();
    for(int i=0; i < n/2; i++)
    {
        swap(arr[i], arr[n-i -1]);
    }
    for(auto it : arr)
    {
        cout << it << " ";
    }
}

//by pure array

void arrayswap(int a[],int s)
{
    for(int i = 0; i < s/2; i++)
    {
        swap(a[i], a[s-1-i]);
    }

    for(int i = 0; i < s; i++)
    {
        cout << a[i] << " ";
    }
}

// -------------------------------------------------------------------------------------------------------------------------------




int main()
{
    vector<int> array = {1,2,3,4,5,6};
    int arr[] ={1,2,3,4,5,19,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrayswap(arr, n);
}
