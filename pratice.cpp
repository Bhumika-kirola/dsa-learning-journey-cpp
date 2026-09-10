// sorting pratice

#include <bits/stdc++.h>

using namespace std;

// selection sort : finding the minimun number from the element and swap with the element on the iterator place

void SelectionSorting(vector<int> &vec, int n, int i)
{
    if (i >= n)
        return;
    int min_index = i;
    for (int j = i; j < n; j++)
    {
        if (vec[j] < vec[min_index])
            min_index = j;
    }
    swap(vec[min_index], vec[i]);

    SelectionSorting(vec, n, i + 1);
}

void BubbleSort(vector<int> &vec, int n, int i)
{
    if (n <= 0)
        return;
    int start = 0;
    while (start < n - 1)
    {
        while (vec[start] >= vec[start + 1] && start < n - 1)
        {
            swap(vec[start], vec[start + 1]);
            start++;
        }
        while (vec[start] < vec[start + 1] && start < n - 1)
            start++;
    }
    BubbleSort(vec, n - 1, i);
}
void BubbleSort2(vector<int> &vec, int n, int i)
{
    if (n <= 0)
        return;
    int start = 0;
    while (start < n - 1)
    {
        if (vec[start] >= vec[start + 1])
        {
            swap(vec[start], vec[start + 1]);
            start++;
        }

        else
            start++;
    }
    BubbleSort(vec, n - 1, i);
}

int merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}
void mergesort(vector<int> &vec, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergesort(vec, low, mid);
    mergesort(vec, mid + 1, high);
    merge(vec, low, mid, high);
}

int reverse(int x)
{
    int num = x;
    int rev = 0;
    while (x != 0)
    {
        rev = rev * 10 + (x % 10);
        x = x / 10;
    }
    
    return rev;
}

int main()
{
    int n;
    cin >> n;
    // vector<int> vec;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     vec.push_back(x);
    // }
    cout << reverse(n);
    // for (auto i : vec)
    //     cout << i << " ";
}