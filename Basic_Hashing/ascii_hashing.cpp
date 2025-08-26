#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cout<<"Enter the string: ";
  cin>>s;
  vector<int>freq(256,0);
  for(int i=0;i<s.size();i++)
  {
    freq[s[i]]++;
  }
  for(int i=0;i<freq.size();i++)
  {
    if(freq[i]>0)
    {
      cout<<freq[i]<<" ";
    }
  }
}