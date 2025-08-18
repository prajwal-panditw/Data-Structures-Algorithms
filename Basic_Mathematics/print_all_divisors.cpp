#include <bits/stdc++.h>
using namespace std;
int main()
{
  set<int>ans;
  int n;
  cin>>n;
  for(int i=1;i*i<=n;i++)
  {
    if(n%i==0)
    {
      ans.insert(i);
      ans.insert(n/i);
    }
  }
  for(auto val:ans)
  {
    cout<<val<<" ";
  }
  return 0;
}