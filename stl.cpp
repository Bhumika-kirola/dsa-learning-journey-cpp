#include <bits/stdc++.h>
using namespace std;

void user_pairs()
{
    pair<int, int> pair1 = {1,2}; //1 2
    cout << pair1.first << " " << pair1.second <<endl; 
    pair<pair<int, int>, int> pair2 = {{3,4}, 5}; //3 4 5
    cout << pair2.first.first << " " << pair2.first.second << " " << pair2.second <<endl;
    pair<pair<int,int>,pair<int, int>> pair3= {{6,7}, {8,9}}; //6 7 8 9
    cout << pair3.first.first << " " << pair3.first.second << " " << pair3.second.first << " " << pair3.second.second <<endl;
}

void user_vectors()
{
    vector<int> v; //{}
    v.push_back(1); //{1}
    v.emplace_back(2); //{1,2}, more faster than the push back fuction
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    vector<int> rep(4,60); //{60,60,60,60}
    vector<int> v0(2,3); // {3,3}

    vector<pair<int,int>> v1; //{}
    v1.push_back({1,3}); //{{1,3}}
    v1.emplace_back(4,5); //{{1,3}, {4,5}}

    vector<int> cpy(v); //{1,2,50,50,50,50}




    cout<< v[0] <<endl; //access just like the iterators




    vector<int> :: iterator st = v.begin(); // 1
    st++;
    cout << *(st) <<endl;
    
    vector<int> :: iterator end = v.end(); // this end operator gives the memory of the place just after the vector end(1157652851)
    cout << *(end -1) <<endl;//2 
    vector<int> :: reverse_iterator rst = v.rbegin(); // 
    cout << *(rst) <<endl;//2
    vector<int> :: reverse_iterator rend = v.rend(); // 
    cout << *(rend -1) <<endl;//1

    for(vector<int> :: iterator st= v.begin(); st != v.end(); st++) //{1 2 3}
    {
        cout << endl  <<*(st) << " ";
    }
    for(auto st= v.begin(); st != v.end(); st++) //{1 2 3}
    {
        cout << endl <<*(st) << " ";
    }
    for(auto st : v) //{1 2 3}
    {
        cout << endl << st << " ";
    }



    //erase
    v.erase(v.begin()+1); // 1 3 4 5 6
    v.erase(v.begin()+1, v.begin()+5); //[start, end) // 1 6
   



    //Insert
    vector <int> in(2, 100); // 100 100 
    in.insert(in.begin(), 300); //300 100 100
    in.insert(in.begin()+1, 2, 70); //300 70 70 100 100
    in.insert(in.end(), v.begin(),v.end());
    cout << in.size(); //11
    //300 70 70 100 100 1 2 3 4 5 6 
    in.pop_back(); //{6}
    in.swap(v);
    in.clear(); //erase enttire list



    for(auto st : in) //{1 2 3}
    {
        cout << endl << st << " ";
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
    //rest function are same as vector
}

void explaindeque()
{
    deque<int> dque;
}


int main()
{
    user_vectors();
}