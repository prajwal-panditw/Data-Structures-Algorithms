#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<j+1<<" ";
    }
    for(int k=0;k<n-i-1;k++)
    {
      cout<<"    ";
    }
    for(int l=i+1;l>=1;l--)
    {
      
      cout<<l<<" ";
    }
    cout<<"\n";
  }
}
int main()
{
  int n;
  cin>>n;
  print(n);
  return 0;
}