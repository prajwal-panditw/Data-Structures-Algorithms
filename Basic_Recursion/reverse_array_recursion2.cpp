#include <bits/stdc++.h>
using namespace std;
void rev(vector<int>&arr,int n,int i)
{
  if(i>=n/2)
  {
    return;
  }
  swap(arr[i],arr[n-i-1]);
  rev(arr,n,i+1);
}
int main()
{
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  rev(arr,n,0);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}