#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter number of elements: ";
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  unordered_map<int,int>mpp;
  for(int i=0;i<arr.size();i++)
  {
    mpp[arr[i]]++;
  }
  for(auto it:mpp)
  {
    cout<<it.first<<"->"<<it.second<<endl;
  }

}