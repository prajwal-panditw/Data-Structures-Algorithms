#include <bits/stdc++.h>
using namespace std;
int main()
{
  unordered_set<int>us;
  us.insert(1);
  us.insert(90);
  us.insert(7);
  us.insert(45);
  us.insert(-4747);
  us.insert(1);
  for(auto val:us)
  {
    cout<<val<<" ";
  }
  cout<<endl;
  //Lower and upper dont work Rest work same as set
}