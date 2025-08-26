#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cout<<"Enter the string: ";
  cin>>s;
  unordered_map<int,int>mpp;
  for(int i=0;i<s.size();i++)
  {
    mpp[s[i]]++;
  }
  for(auto it:mpp)
  {
    cout<<char(it.first)<<"->"<<it.second<<endl;
  }

}