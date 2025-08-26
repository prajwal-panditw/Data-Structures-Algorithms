#include <bits/stdc++.h>
using namespace std;
int main()
{
  // queue<int>q,q1;
  // cout<<q.size()<<endl;
  // q.push(1);
  // cout<<q.back()<<" "<<q.front()<<endl;
  // q.emplace(2);
  // cout<<q.back()<<" "<<q.front()<<endl;
  // q.push(3);
  // q.push(4);
  // cout<<q.back()<<" "<<q.front()<<endl;
  // cout<<q.size()<<endl;
  // q.pop();
  // cout<<q.back()<<" "<<q.front()<<endl;
  // cout<<q.size()<<endl;
  // q.pop();
  // cout<<q.back()<<" "<<q.front()<<endl;
  // q1.push(100);
  // q1.push(50);
  // q1.swap(q);
  // cout<<q.back()<<" "<<q.front()<<endl;
  queue<int>qu;
  for(int i=1;i<=5;i++)
  {
    qu.push(i);
  }
  // cout<<qu.front()<<" "<<qu.back();
  while(!qu.empty())
  {
    cout<<qu.front()<<"\n";
    qu.pop();
  }



  
    


}