#include <bits/stdc++.h>
using namespace std;
int net(int n)
{
  if(n==0)
  {
    return 0;
  }
  return n+net(n-1);
}
int main()
{
  int n;
  cin>>n;
  cout<<net(n);
}