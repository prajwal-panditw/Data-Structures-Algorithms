#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
  int k;
  for(int i=0;i<n;i++)
  {
    int k;
    if(i%2==0)
    {
      k=1;
    }
    else{
      k=0;
    }
    for(int j=0;j<=i;j++)
    {
       cout<<k<<" ";
       k=1-k;
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