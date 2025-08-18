#include <bits/stdc++.h>
using namespace std;
void passbyval(int a)
{
  a+=5;
  cout<<a<<endl;
  return;
}
void passbyref(int &c)
{
  c*=8;
  cout<<c<<endl;
  return;
}
int main()
{
  int a;
  cin>>a;
  cout<<a<<endl;
  passbyval(a);
  cout<<a<<endl;
  passbyref(a);
  cout<<a;
  return 0;
}