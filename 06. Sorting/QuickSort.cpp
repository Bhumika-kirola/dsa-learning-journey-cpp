#include <bits/stdc++.h>

using namespace std;


int sort(vector<int> &vec, int low, int high)
{
    int num = vec[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while (i<=high && vec[i]<= num)
        {
            i++;
        }
        while (j>=low && vec[j]> num)
        {
            j--;
        }
        if(i<j) swap(vec[i], vec[j]); 
    }
    swap(num, vec[i]);
    return i;
}
void quicksort(vector<int>&vec, int high, int low)
{
    if (low < high)
    {
        int num = vec[low];
        int c_i = sort(vec, low, high);
        sort(vec, low, c_i);
        sort(vec, c_i+1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    quickSort(vec, 0, n-1);
    for(auto i : vec) cout << i << " ";
}