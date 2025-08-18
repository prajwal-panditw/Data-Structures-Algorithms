#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
  for(int i=0;i<n;i++)
  {
    char ans='A'+n-i-1;
  
    for(int j=0;j<=i;j++)
    {
     cout<<ans<<" ";
     ans++;
    }
    cout<<"\n";
  }
  return;
}
int main()
{
  int n;
  cin>>n;
  print(n);
  return 0;
}