#include <bits/stdc++.h>

using namespace std;

//in the main the largest value of the indice the you can declare inside the main function is (10^6) if you declared somthing larger than this it will throw segementation fault (WHICH MEANS THE COMPILER ISNT ABLE TO GENERATE THAT MUCH MEMORY). in the global you can have the max of 10^7.
// hatching - prestore and hatch
// 1 3 6 1 9 6 
int main()
{
    int x, q;
    cin >> x;
    int array[x];
    for (int i=0; i<x ; i++)
    {
        cin >> array[i];
    }
    cout << "Your array" << endl;
    for (int i=0; i<x ; i++)
    {
        cout << array[i] << "  ";
    }


    //STORE

    int frequency[13] = {0}; // hash method is just a array concept being used smartly. declare it like array and the indices should be declared one more that what the max value would be input and the {0} means to have the array all value inside initilize to 0 and not to store the garbage value.
    for (int i = 0 ; i < x ; i++)
    {
        frequency[array[i]] +=1 ;
    }

    cout <<  "Till the numbers you wanna check the values " ;
    cin >> q;

    while (q--)
    {
        int num;
        cin >> num;
        // fetch 
        cout << frequency[num] << endl;
    }
}