#include <bits/stdc++.h>
using namespace std;
bool check_palin(string s,int l,int i)
{
  if(i>=l/2)
  {
    return true;
  }
  if(s[i]!=s[l-i-1])
  {
    return false;
  }
 return check_palin(s,l,i+1);
}
int main()
{
  string s;
  cin>>s;
  cout<<boolalpha;
  cout<<check_palin(s,s.length(),0);
}