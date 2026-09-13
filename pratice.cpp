#include <bits/stdc++.h>

using namespace std;


// ------------------------------------------------------QUICK SORT----------------------------------------------------------
int partition(vector<int>& v, int low, int high)
{
    int pivot = v[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while(i < high && pivot >= v[i]) i++;
        while(j > low && pivot < v[j]) j--;
        if(i < j) swap(v[i], v[j]);
    }
    swap(v[low], v[j]);
    return j;
}

void q0(vector<int>& v, int low, int high)
{
    if (low >= high) return;
    int pivot = low;
    int corr_index = partition(v, pivot, high);
    q0(v, low, corr_index-1);
    q0(v, corr_index+1, high);
}


// ---------------------------------------------------------MERGE SORT-------------------------------------------------------------

void merge(vector<int>& v, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while (left <= mid && right <= high)
    {
        while(v[left] > v[right] && left <= mid && right <= high)
        {
            temp.push_back(v[left]);
            left++;
        }
        while(v[right] >= v[left] && left <= mid && right <= high)
        {
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    while(right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }


    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}
void q1(vector<int>& v, int low, int high)
{
    if (low >= high) return;
    int mid = (low+high)/2;
    q1(v, low, mid);
    q1(v, mid+1, high);
    merge(v, low, mid, high);    
}

int main()
{
    int n;
    cout << "how many elements you want to have in the array: ";
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    q1(v,0,n-1);
    for(auto i : v) cout << i << " ";
}