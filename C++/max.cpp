#include <bits/stdc++.h>
using namespace std;
int maxx(int a,int b)
{
  if(a>=b)
  {
    return a;
  }
  return b;
}
int main()
{
  int a,b;
  cin>>a>>b;
  cout<<"Max Value is: "<<maxx(a,b);
}