 #include <bits/stdc++.h> 
using namespace std;
//sorted and unique -set
void explainSet()
{
    set<int>st;
    st.insert(1);//1
    st.emplace(2);//1,2
    st.insert(2);//1,2
    st.insert(4);//1,2,4
    st.insert(3);//1,2,3,4

    //begin(),end(),rbegin(),rend(),size(),
    //empty() and swap() are same as those of above

    auto it=st.find(3);//stores the iterator(address)
    auto it=st.find(6);//element not found,returns st.end()

    st.erase(4);//deletes 4 - takes log time

    int cnt=st.count(1);
    auto it=st.find(3);
    st.erase(it);//it takes constant time


    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);//after erase {1,4} [first,last)

    //loweer_bound() and upper_bound() function works in the same way
    //as in vector it does

    //This is the syntax
    auto it = st.lower_bound(2);

    auto it=st.upper_bound(3);
}
int main()
{
    explainSet();
    return 0;
}