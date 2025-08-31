#include <bits/stdc++.h>
using namespace std;
int unique_number(vector<int>&arr)
{
  unordered_map<int, int> mpp;
  for (int i = 0;i<arr.size();i++)
  {
    mpp[arr[i]]++;
  }
  for(auto it:mpp)
  {
    if(it.second==1)
    {
      return it.first;
    }
  }
  return -1;
}
int main()
{
  int n;
  cout<<"Enter number of items: ";
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int ans = unique_number(arr);
  cout << "Unique number: " <<ans;
}