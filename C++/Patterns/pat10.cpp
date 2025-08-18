#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
  for(int i=1;i<=2*n;i++)
  {
    int stars=i;
    if(stars>n)
    {
      stars=2*n-i;
    }
    
    for(int j=1;j<=stars;j++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }
  return;
}

int main()
{
  int n;
  cin>>n;
  print1(n);
  return 0;
}