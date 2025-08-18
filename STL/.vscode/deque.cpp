#include <bits/stdc++.h>
using namespace std;
int main()
{
  deque<int>dq;
  dq.push_back(3);
  dq.emplace_back(2);
  dq.push_front(1);
  dq.emplace_front(0);
  dq.pop_front();
  dq.pop_back();
  for(auto y:dq)
  {
    cout<<y<<" ";
  }
  cout<<endl;
  cout<<dq[0]<<" "<<dq[1]<<endl;
  dq={10,20,30,40,50};
  dq.erase(dq.end()-1);
  for(auto y:dq)
  {
    cout<<y<<" ";
  }
  dq.insert(dq.end(),50);
  cout<<endl;
    for(auto y:dq)
  {
    cout<<y<<" ";
  }
  cout<<endl<<dq.front();
}