#include <bits/stdc++.h>
using namespace std;
int main()
{
  multiset<int>ms;
  ms.insert(5);
  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  ms.insert(3);
  ms.insert(5);
  for(auto val:ms)
  {
    cout<<val<<" ";
  }
  cout<<endl;
  cout<<ms.count(1)<<" "<<ms.count(4)<<" "<<ms.count(3)<<endl;
  ms.erase(5);
   for(auto val:ms)
  {
    cout<<val<<" ";
  }
  cout<<endl;
  ms.insert(100);
  ms.insert(8);
    for(auto val:ms)
  {
    cout<<val<<" ";
  }
  auto it=ms.begin();
  ms.erase(it);
  cout<<endl;
     for(auto val:ms)
  {
    cout<<val<<" ";
  }
  cout<<endl;
  it=ms.begin();
  ms.erase(next(it,1),next(it,3));
  for(auto val:ms)
  {
    cout<<val<<" ";
  }
  

}