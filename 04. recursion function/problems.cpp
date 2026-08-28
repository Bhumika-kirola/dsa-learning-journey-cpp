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
void byrec(vector<int>& array, int i, int n)
{
    if (n>=(i/2))
    {
        for(auto it : array)
        {
            cout << it << "  ";
        }
        return;
    }
    else
    {
        swap(array[n], array[i-1-n]);
        byrec(array, i, n+1);
    }
}

void byrec2(int a[], int size, int i)
{
    if (i > (size/2))
    {
        for(int m = 0; m < size; m++)
        {
            cout << a[m] << " ";
        }
        return;
    }

    else
    {
        swap(a[i], a[size-1-i]);
        byrec2(a, size, i+1);
    }
}

// ------------------------------------------------------------------------------------------------------------------------------------

bool restring(std::string& s, int size, int i)
{
    if (i > (size/2)) return true;
    if (s[i] != s[size-1-i]) return false;
    restring(s, size, i+1);
}


int main()
{
    vector<int> array = {1,2,3,4,5,6};
    int vn = array.size();
    int arr[] ={1,2,3,4,5,19,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::string str;
    cout << "enter your string you wanna check is palandrom or not: ";
    cin >> str;
    cout << "You entered: " << str << endl;
    int StrSize = str.size();
    bool value = restring(str, StrSize, 0);
    (value == true)? cout << "palandrom" : cout << "not palandrom";
}
