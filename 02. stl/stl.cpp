#include <bits/stdc++.h>
using namespace std;

void user_pairs()
{
    pair<int, int> pair1 = {1, 2}; // 1 2
    cout << pair1.first << " " << pair1.second << endl;
    pair<pair<int, int>, int> pair2 = {{3, 4}, 5}; // 3 4 5
    cout << pair2.first.first << " " << pair2.first.second << " " << pair2.second << endl;
    pair<pair<int, int>, pair<int, int>> pair3 = {{6, 7}, {8, 9}}; // 6 7 8 9
    cout << pair3.first.first << " " << pair3.first.second << " " << pair3.second.first << " " << pair3.second.second << endl;
}

void user_vectors()
{
    vector<int> v;     //{}
    v.push_back(1);    //{1}
    v.emplace_back(2); //{1,2}, more faster than the push back fuction
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    vector<int> rep(4, 60); //{60,60,60,60}
    vector<int> v0(2, 3);   // {3,3}

    vector<pair<int, int>> v1; //{}
    v1.push_back({1, 3});      //{{1,3}}
    v1.emplace_back(4, 5);     //{{1,3}, {4,5}}

    vector<int> cpy(v); //{1,2,50,50,50,50}

    cout << v[0] << endl; // access just like the iterators

    vector<int>::iterator st = v.begin(); // 1
    st++;
    cout << *(st) << endl;

    vector<int>::iterator end = v.end();            // this end operator gives the memory of the place just after the vector end(1157652851)
    cout << *(end - 1) << endl;                     // 2
    vector<int>::reverse_iterator rst = v.rbegin(); //
    cout << *(rst) << endl;                         // 2
    vector<int>::reverse_iterator rend = v.rend();  //
    cout << *(rend - 1) << endl;                    // 1

    for (vector<int>::iterator st = v.begin(); st != v.end(); st++) //{1 2 3}
    {
        cout << endl
             << *(st) << " ";
    }
    for (auto st = v.begin(); st != v.end(); st++) //{1 2 3}
    {
        cout << endl
             << *(st) << " ";
    }
    for (auto st : v) //{1 2 3}
    {
        cout << endl
             << st << " ";
    }

    // erase
    v.erase(v.begin() + 1);                // 1 3 4 5 6
    v.erase(v.begin() + 1, v.begin() + 5); //[start, end) // 1 6

    // Insert
    vector<int> in(2, 100);           // 100 100
    in.insert(in.begin(), 300);       // 300 100 100
    in.insert(in.begin() + 1, 2, 70); // 300 70 70 100 100
    in.insert(in.end(), v.begin(), v.end());
    cout << in.size(); // 11
    // 300 70 70 100 100 1 2 3 4 5 6
    in.pop_back(); //{6}
    in.swap(v);
    in.clear(); // erase enttire list

    for (auto st : in) //{1 2 3}
    {
        cout << endl
             << st << " ";
    }
}

void explainlist()
{
    list<int> ls;

    ls.emplace_back(2);
    ls.emplace_back(3);
    ls.emplace_back(4);
    ls.emplace_back(5);
    ls.push_front(1);
    // rest function are same as vector
}

void explaindeque()
{
    deque<int> dque;
    dque.emplace_back(2);
    dque.emplace_back(3);
    dque.emplace_back(4);
    dque.emplace_back(5);
    dque.push_front(1);
    // rest function are same as vector
}

void _stack()
{
    // follow lifo = last in first out

    stack<int> _S;

    _S.push(2);       // 2
    _S.emplace(3);    // 3,2
    _S.emplace(4);    // 4,3,2
    _S.emplace(5);    // 5,4,3,2
    cout << _S.top(); // 5
    _S.pop();         // 5
    _S.size();        // 4
    _S.empty();       // clear the stack
    stack<int> s1;
    _S.swap(s1);
}

void _queue()
{
    queue<int> q1;
    q1.push(1);    // 1
    q1.push(2);    // 1 2
    q1.push(3);    // 1 2 3
    q1.emplace(4); // 1  2 3 4

    q1.back() += 5; // 9
    cout << q1.back();

    cout << q1.front();

    q1.pop();

    cout << q1.front();

    // size empty swap are similar to stack
}

void _pq()
{
    // Maximum heap- priority queue, puts the maximum int on the top
    priority_queue<int> pq1;
    pq1.push(3);  // 3
    pq1.push(9);  // 9 3
    pq1.push(19); // 19 9 3
    pq1.push(5);  // 19 9 5 3
    cout << pq1.top();
    // size empty swap are same

    // Minimum heap - priority queue with the priority of minimum numbers

    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(3);       // 3
    pqm.push(9);       // 3 9
    pqm.push(19);      // 3 9 19
    pqm.push(1);       // 1 3 9 19
    cout << pqm.top(); // 1
}

void explainset()
{
    // store in sorted order and unique
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(29);
    st.insert(4);
    st.insert(5);
    st.insert(16);
    st.insert(3);
    // 1 2 3 4 6 16 29

    auto it = st.find(29); // 29
    cout << *(it);
    st.erase(29);
    int cn = st.count(1); // 1 (found)
    cout << cn;
    cn = st.count(29); // 0 not found
    cout << cn;

    cout << *(it);

    auto it1 = st.find(4);
    auto it2 = st.find(16);
    st.erase(it1, it2); // [start, end)

    // lower bound and upper bound
}

void explainmultiset()
{
    // everything is same as the set. only difference - can store dublicate element

    // size empty swap begin end rend rbegin are similar to above

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(1); // It will erase All the 1 Which are there in this multi set

    ms.erase(ms.find(1)); // This will erase One occurrence Of the number. Working- find(1) Will grab the Address of any of the one occurrence of the number And the erase function will erase that

    ms.erase(ms.find(1), ms.find(1 +2));
}

void uset()
{
    // Everything is exactly similar to the set. The only thing Different is that this set stores The values in unordered manner
}

void ExplainMap()
{
    map <int , int> mpp;
    map <pair<int , int>, int> mpp1;
    map < int , pair<int , int>> mpp2;

    mpp[1] = 2;
    mpp.insert({2,3});

    for (auto it : mpp)
    {
        cout << it.first << " : " << it.second << endl;
    }
    auto itt = mpp.find(1);
    cout << itt->second;
}
int main()
{
    int x, y;
    cin >> x; 
    for (int i =1 ; i <= x; i++)
    {
        y = x/i;
    }
    cout << y;
    ExplainMap();
}