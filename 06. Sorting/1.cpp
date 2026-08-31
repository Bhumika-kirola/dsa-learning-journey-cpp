#include <bits/stdc++.h>

using namespace std;


void SelectionSorting(int array[], int x)
{
    // selection soting : ypu select the minimum number from the array and then swap it with the iterator which would running in the loop at that instant.
    for (int i = 0; i < x; i++)
    {
        int mini = i;
        for (int j = i ; j < x; j++)
        {
            if(array[j] < array[mini]) mini = j;
        }
        int temp = array[i];
        array[i] = array[mini];
        array[mini] = temp;
    }
}

void VectorSelectingSort(vector<int>& v1, int x)
{
    for(auto i = v1.begin(); i != v1.end(); i++)
    {
        auto mini = i ;
        for (auto j = i ; j != v1.end(); j ++)
        {
            if (*j < *mini) mini = j;
        }
        auto temp = *i;
        *i = *mini;
        *mini = temp;
    }
}

int main()
{
    int x,y;
    cin >> x;
    // int array[x];
    // // --------------for the array-------------------
    // for (int i = 0 ; i < x; i++) cin >> array[i];
    // SelectionSorting(array, x);
    // ----------------for the vector-----------------
    vector <int> v;
    for (int i = 0 ; i < x; i ++)
    {
        cin >> y;
        v.push_back(y);
    }
    VectorSelectingSort(v, x);
    // -----------------output---------------
    // for (int i = 0 ; i < x ; i ++)
    // { 
    //     cout << array[i] << " ";
    // }

    for (auto it: v) cout << it << " ";
}