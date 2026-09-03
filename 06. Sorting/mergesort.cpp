#include <bits/stdc++.h>

using namespace std;

void Merge(vector<int> &vec, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (vec[left] <= vec[right])
        {
            temp.push_back(vec[left]);
            left++;
        }
        else
        {
            temp.push_back(vec[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(vec[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(vec[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        vec[i] = temp[i - low];
    }
}

void MergeSort(vector<int> &vec, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    MergeSort(vec, low, mid);
    MergeSort(vec, mid + 1, high);
    Merge(vec, low, mid, high);
}

void RecursiveSelectionSort(vector<int> &v, int end, int start)
{
    if (start > end)
        return;
    int min = start;
    for (int i = start; i < end; i++)
    {
        if (v[min] > v[i])
        {
            min = i;
        }
    }
    swap(v[min], v[start]);
    RecursiveSelectionSort(v, end, start + 1);
}

void RecursiveBubbleSort(vector<int> &v, int start, int last)
{
    if (last <= start)
        return;
    for (int i = start; i < last; i++)
    {
        if (v[i] > v[i + 1])
            swap(v[i], v[i + 1]);
    }
    RecursiveBubbleSort(v, start, last - 1);
}
int main()
{
    // user input array
    int n, x;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    RecursiveBubbleSort(vec, 0, n - 1);
    for (auto i : vec)
        cout << i << " ";
}