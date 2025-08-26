#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cout<<"Enter the string: ";
  cin>>s;
  vector<int>hashh(26,0);
  for(int i=0;i<s.size();i++)
  {
    hashh[s[i]-'a']++;
  }
  for(int i=0;i<hashh.size();i++)
  {
    cout<<hashh[i]<<" ";
  }
}