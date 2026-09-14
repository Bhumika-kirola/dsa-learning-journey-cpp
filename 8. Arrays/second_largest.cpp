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

// optimal method

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

// QUESTION 4: MOVE THE ARRAY K TIMES LEFT

// LEFT ROTE IT FOR 1 TIME 

// 12345 --- 23451

void q4_1(vector<int>& v, int n)
{
    int temp = v[0];
    for(int i = 1; i < n; i++)
    {
        v[i-1] = v[i]; 
    }
    v[n-1] = temp;

    for (auto i : v)
    {
        cout << i << " "; 
    }
}


void q(vector<int>& v, int n)
{
    int k;
    cout << "how many time you want to rotate the array: ";
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int temp = v[0];
        for (int j = 1 ; j < n; j++)
        {
            v[j-1] = v[j];
        }
        v[n-1] = temp;
    }


    for (auto i : v)
    {
        cout << i << " ";
    }
} 
void q4_2(vector<int>& v, int n, int k)
{
    if (k%7 == 0) return;
    vector<int> temp;
    int rotation;
    if (k > n) rotation = (k%n);
    
    for(int i = 0; i <= rotation; i++) temp.push_back(v[i]);
    for (int i = rotation; i < n; i++)
    {
        v[i - rotation] = v[i];
    }
    for (int i = n-rotation; i < n; i++)
    {
        v[i] = temp[i - (n-rotation)];
    }
}
// ------------------------------optimal solution----------------------------------
void q4_3(vector<int>& v, int n, int k)
{
    int rotate = k%n;
    reverse(v.begin(), v.begin() + rotate);
    reverse(v.begin() +rotate, v.end());
    reverse(v.begin(), v.end());
}


// ----------------------------------------------------------RIGHT ROTATION-------------------------------------------------------------

void q5(vector<int>& v, int n, int k)
{
    if (k % n == 0) return;
    if (k > n) k %= n;
    vector<int> temp;
    for (int i = n - k; i < n; i++) temp.push_back(v[i]);
    for (int i = n - 1; i >= k ; i --) v[i] = v[i - k];
    for (int i = 0; i < k; i++)
    {
        v[i] = temp[i];
    }
}

void q5_1(vector<int>& v, int n, int k)
{
    if (k % n == 0) return;
    if (k > n) k %= n;
    reverse(v.end(), v.end()-k);
    reverse(v.begin(), v.end() - k);
    reverse(v.begin(), v.end());
}
//  QUESTION 6: PRINT ALL THE ZERO AT THE END OF THE ARRAY

// brute
void q6(vector<int>& v, int n)
{
    int ctr = 0;
    vector<int> temp;
    for (int i = 0 ; i < n; i ++)
    {
        if(v[i] == 0) ctr += 1;
        else temp.push_back(v[i]);
    }
    for (int i = 0; i < temp.size(); i++)
    {
        v[i] = temp[i];
    }
    for (int i = temp.size() ; i < n; i++) v[i] = 0;
}

// optimal
void q6_2(vector<int>& v, int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0) 
        {
            j = i;
            break;
        }
    }
    if( j == -1 ) return;
    else
    {
        for (int i = j+1 ; i < n; i++)
        {
            if (v[i] != 0) 
            {
                swap(v[j], v[i]);
                j++;
            }
        }
    }
}

void q6_3 (vector<int>& v, int n)
{
    int i = 0;
    int j = n - 1;
    while(i < j && i < n && j >= 0)
    {
        while (i < j && v[i] != 0) i++;
        while(j >= 0 && v[j] == 0) j--;
        if(i < j) 
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}

// ----------------------------------------linear search--------------------------------

int q7(vector<int>& v, int n)
{
    int num;
    cout << "what number do you want to search";
    cin >> num;
    for(int i = 0; i < n; i ++)
    {
        if (v[i] == num)
        {
            return i;
        }
    }
    return -1;
}

// QUESTION 8: FIND THE UNION AND INTERSECTION OF BOTH THE SORTED ARRAY

// BRUTE FORCE

void q8(vector<int>& v, int n)
{
    cout << "THis is for the second array: ";
    int x;
    vector<int> v2;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v2.push_back(x);
    }

    set<int> s;
    for(int i = 0; i < n; i++)
    {
        s.insert(v[i]);
    }
    

    for(int i = 0; i < n; i++)
    {
        s.insert(v2[i]);
    }

    for (auto i : s)
    {
        cout << i << " ";
    }
}

// better solution 

void q8_1(vector<int>& v, int n)
{
    cout << "input the value for the second array" << endl;
    int x;
    vector<int> v2;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v2.push_back(x);
    }
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
    // cout << "how many rotation you want: " ;
    // int k;
    // cin >> k;
    // int ans = q7(vec, n);
    q8(vec, n);
    // (ans == -1)? cout << "there is no such number present in the array" : cout << ans ;
    // for (auto i : vec) cout << i << " ";
}