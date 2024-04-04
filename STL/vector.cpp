#include<bits/stdc++.h>
using namespace std;
void explainVector()
{
    vector<int>v;//creates a empty container
    v.push_back(1);
    v.emplace_back(2);//dynamically increases its size and pushes 2 at back and is faster

    vector<pair<int,int>>p;
    p.push_back({3,4});
    p.emplace_back(2,4);
    vector<int> a(5,100);//{100,100,100,100,100};
    vector<int> b(5);//{0,0,0,0,0};
    b.push_back(1);
    
    vector<int> c(b);//copying b into c vector

    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<b.back()<<endl;//prints last element of the vector

    for(auto i:v)//for each loop to print elements in a vector
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>g;
    for(int i=0;i<6;i++)
    {
        g.push_back(i);//{0,1,2,3,4,5};
    }
    //deleting elements in vector
    g.erase(g.begin()+1);
    for(auto i:g)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    g.erase(g.begin()+1,g.begin()+3);
    for(auto i:g)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //inserting elements in vector
    vector<int>i(2,100);//{100,100};
    i.insert(i.begin(),300);//{300,100,100};
    i.insert(i.begin()+1,2,10);//{300,10,10,100,100};

    vector<int> copy(3,50);
    i.insert(i.begin(),copy.begin(),copy.end());//{50,50,50,300,10,10,100,100}
    cout<<endl;

    cout<<i.size();
    cout<<endl;

    i.pop_back();
    for(auto a:i)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    v.swap(i);
    
    
     for(auto a:i)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    for(auto a:v)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    v.clear();
   cout<<v.size()<<" ";
   cout<<endl;
    cout<<v.empty();
    
}

int main()
{
    explainVector();
    return 0;
}