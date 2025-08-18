#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int>s;
  s.push_back(3);
  s.emplace_back(4);
  for(auto t:s)
  {
    cout<<t<<" ";
  }
  s.push_front(2);
  cout<<endl;
   for(auto t:s)
  {
    cout<<t<<" ";
  }
  s.emplace_front();
  cout<<endl;
   for(auto t:s)
  {
    cout<<t<<" ";
  }
  cout<<endl;
  s.pop_back();
   for(auto t:s)
  {
    cout<<t<<" ";
  }
  s.pop_front();
  cout<<endl;
    for(auto t:s)
  {
    cout<<t<<" ";
  }
  auto it=s.begin();
  cout<<endl;
  for( it;it!=s.end();it++)
  {
    cout<<*it<<" ";
  }
  s.erase(prev(s.end()));
   cout<<endl;
    for(auto t:s)
  {
    cout<<t<<" ";
  }
  s.insert(next(s.begin(),1),56);
   cout<<endl;
    for(auto t:s)
  {
    cout<<t<<" ";
  }
  cout<<endl;
  cout<<s.front();

}