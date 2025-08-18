#include <bits/stdc++.h>
using namespace std;
int main()
{//Max Heap default
  priority_queue<int>pq;
  pq.push(4);
  pq.push(2);
  pq.push(-9);
  pq.emplace(5);
  cout<<pq.size()<<endl<<pq.top()<<endl;
  pq.pop();
  cout<<pq.size()<<endl<<pq.top()<<endl;
  //Min Heap
  priority_queue<int,vector<int>,greater<int>>mipq;
  mipq.push(3);
  mipq.push(1);
  mipq.push(89);
  mipq.push(-999);
  cout<<mipq.top()<<endl;
  mipq.pop();
  cout<<mipq.top()<<endl;
  while(!pq.empty())
  {
    cout<<pq.top()<<" ";
    pq.pop();
  }

  


}