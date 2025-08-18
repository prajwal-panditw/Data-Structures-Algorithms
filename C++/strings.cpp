#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s="Prajwal";
  int len=s.size();
  cout<<s[0]<<" "<<s[len-1]<<endl;
  s[0]='p';
  cout<<s[0]<<" "<<s[len-1];
  return 0;
}