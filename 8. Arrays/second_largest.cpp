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
// optimized solution

void m2 (vector <int>& v, int n)
{
    int largest = v[0];
    for(int i = 0; i < n; i++)
    {
        if (largest <= v[i]) largest = v[i];
    } 
    cout << largest;
}

// the soting and all stuff not that necessary until specified 
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


// QUESTION 2 : YOU HAVE TO FIND THE SECOND LARGEST NUMBER IN THE GIVEN ARRAY OF NUMBERS

// BRUTE METHOD
void S_m0(vector<int>& v, int n)
{
    sort(v.begin(), v.end());
    for (int i = n-2; i >= 0; i--)
    {
        if (v[i] != v[n-1])
        {
            cout << v[i];
            break;
        }
    }
}

// better way
void S_m(vector<int>& v, int n)
{
    int largest = v[0], s_largest = -1;
    for (int i = 1; i < n; i++)
    {
        if (largest <= v[i]) largest = v[i];
    }
    for (int j = 0; j < n; j ++)
    {
        if (v[j] >= s_largest && v[j] != largest) s_largest = v[j];
    }
    cout << s_largest;
}

// optimal solution 

void S_M_O(vector<int>& v, int n)
{
    int largest = v[0], s_largest = - 1; //assuming the array contains only whole nums if there are negetave num use int min instead
    for (int i = 1; i < n; i++)
    {
        if (largest < v[i])
        {
            s_largest = largest;
            largest = v[i];
        }
    }
    cout << largest << " " << s_largest;
}


// QUESTION 3: YOU HAVE BEEN GIVEN A ARRAY WHICH COINTAIN DUPLICATE VALUES YOU HAVVE TO MAKE THIS ARRAY A UNIQUE ARRAY


// BRUTE METHOD : USE THE SET 

void q_3_b(vector<int>& v, int n)
{
    set <int> s;
    for (int i = 0 ; i < n; i++ )
    {
        s.insert(v[i]);
    }
    int index = 0;
    for (auto it : s)
    {
        v[index] = it;
        index++;
    }
    for (int i = 0; i < index ; i++) cout << v[i] << " ";
}

void q_3_o(vector<int>& v, int n)
{
    sort(v.begin(), v.end());
    int j = 0;
    for (int i = 1; i < n; i ++) 
    {
        if (v[j] != v[i])
        {
            j++;
            v[j] = v[i];
        }
    }
    for (int i = 0; i <= j; i++) cout << v[i] << " ";
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
    q_3_o(vec, n);
}