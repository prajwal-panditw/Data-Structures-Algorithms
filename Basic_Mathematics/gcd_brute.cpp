#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  int n=min(a,b),hcf=1;
  for(int i=1;i<=n;i++)
  {
    if(a%i==0&&b%i==0)
    {
      hcf=i;
    }
  }
  cout<<hcf;

}