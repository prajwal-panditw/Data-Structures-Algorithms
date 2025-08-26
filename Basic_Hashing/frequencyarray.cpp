#include <bits/stdc++.h>
using namespace std;
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
  cout<<"Enter the max item that can be present: ";
  int max_val;
  cin>>max_val;
  vector<int>freq(max_val,0);
  for(int i=0;i<arr.size();i++)
  {
    freq[arr[i]]++;
  }
  for(int i=0;i<freq.size();i++)
  {
    cout<<freq[i]<<" ";
  }
}