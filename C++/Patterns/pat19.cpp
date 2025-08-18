#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i;j++)
    {
      cout<<"* ";
    }
    for(int k=0;k<2*i;k++)
    {
      cout<<"  ";
    }
    for(int j=0;j<n-i;j++)
    {
      cout<<"* ";
    }

    cout<<"\n";
  }
  return;
}
void print2(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<"* ";
    }
    for(int k=0;k<2*(n-i-1);k++)
    {
      cout<<"  ";
    }
    for(int j=0;j<=i;j++)
    {
      cout<<"* ";
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
  print2(n);
  return 0;
}