#include <bits/stdc++.h>
using namespace std;



void ArraySelectionSort(int array[], int n)
{

    // 2 4 3 0 7 9 1 5 6     7
    for (int i = 0 ; i < n; i++)
    {
        int mini = i;

        for(int j = i; j < n; j++)
        {
            if (array[j] < array[mini]) mini = j;
        }

        int temp = array[i];
        array[i] = array[mini];
        array[mini] = temp;
    }
}


void ArrayBubbleSort(int array[], int n)
{
    // 2 4 3 0 7 9 1 5 6         9

    for (int i = n-1; i >= 0; i--)
    {
        int max = i;
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[max]) max = j;
        }
        int temp = array[i];
        array[i] = array[max];
        array[max] = temp;
    }
}

void ArrayInsersionSort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
       int num = i;
        for (int j = i ; j >= 0; j--)
        {
            if (array[j] > array[num]) num = j;
        }
        swap(array[num], array[i]);
    }  
}


void VectorSelectionSort(vector<int> vec, int n)
{
    for( auto i = vec.begin(); i != vec.end(); i++)
    {
      int min = *i;

      for(auto j = vec.begin(); j != vec.end(); j++)
      {
        if(*j < min) min = *j;
      }

      int temp = *i;
      *i = min;
      min = temp;
    }
}

void VectorBubbleSort(vector<int>& vec, int n) // always pass the vector by the reference
{
    for(int i = n-1 ; i > 0; i--)
    {
        int max = i;
        for(auto j = 0; j < i ; j++)
        {
            if (vec[j] > vec[max])  max = j;
        }
        int temp = vec[i];
        vec[i] = vec[max];
        vec[max] = temp;
    }
}



int main()
{
    int n, x;
    cin >> n;
    vector <int> v;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    ArrayInsersionSort(array, n);
    // VectorBubbleSort(v, n);
    // for (auto i : v) cout << i << " ";
    for (int i = 0; i < n ; i++) cout << array[i] << " ";
}