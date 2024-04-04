#include <bits/stdc++.h> //push pop top O(1)
using namespace std;
//first in first out-queue
void explainQueue()
{
   
   queue<int>q;
   q.push(1);//{1}
   q.push(2);//{1,2}
   q.emplace(4);//{1,2,4}

   q.back()+=5;
   cout<<q.back();//9
   cout<<q.front();//1


   q.pop();//{2,9}

   cout<<q.front();

}
int main()
{
    explainQueue();
    return 0;
}