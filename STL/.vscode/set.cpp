#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<int>st;
  st.insert(1);
  st.insert(5);
  st.insert(2);
  cout<<st.size()<<"\n";
  for(auto x:st)
  {
    cout<<x<<" ";
  }
  cout<<endl;
  for(auto it=st.begin();it!=st.end();it++)
  {
    cout<<*it<<" ";
  }
  cout<<endl;
  auto it=st.find(2);
  cout<<*it<<endl;
  // auto it2=st.find(100);
  // cout<<*it2; Undefined Behaviour
  st.erase(it);
   for(auto x:st)
  {
    cout<<x<<" ";
  }
  st.erase(5);
  cout<<endl;
    for(auto x:st)
  {
    cout<<x<<" ";
  }
  cout<<endl<<boolalpha;
  cout<<st.count(1)<<" "<<st.count(5)<<endl;
  set<int>st1;
  st1.insert(100);
  st1.insert(99);
  st1.insert(98);
  st1.insert(97);
  st1.insert(96);
  st1.insert(95);
  st1.emplace(94);
  for(auto u:st1)
  {
    cout<<u<<" ";
  }
  st1.erase(next(st1.begin(),1),prev(st1.end(),1));
  cout<<endl;
  for(auto u:st1)
  {
    cout<<u<<" ";
  }
}