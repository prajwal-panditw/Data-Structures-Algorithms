#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
  for(int i=0;i<n;i++)
  {
    char ans='A';
    for(int k=0;k<2*(n-i)-2;k++)
    {
      cout<<" ";
    }
    for(int j=0;j<=2*i;j++)
    {
      cout<<ans<<" ";
      if(j<i)
      {
        ans++;
      }
      else{
        ans--;
      }
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