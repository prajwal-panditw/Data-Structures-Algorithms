#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==0||i==n-1||j==0||j==n-1)
      {
        cout<<"* ";
      }
      else{
        cout<<"  ";
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