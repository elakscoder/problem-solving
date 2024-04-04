#include <bits/stdc++.h> //push pop top O(1)
using namespace std;
//last in first out-stack
void explainStack()
{
    stack<int> st;
    st.push(1);    //{1}
    st.push(2);    //{2,1}
    st.push(3);    //{3,2,1}
    st.push(3);    //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout << st.top();
    cout << endl;

    st.pop();

    cout << st.top();
    cout << endl;

    cout << st.size();
    cout << endl;

    cout << st.empty();
    cout << endl;

    stack<int> st2;
    st.swap(st2);
    cout << st2.top();
    cout << endl;
}
int main()
{
    explainStack();
    return 0;
}