#include <bits/stdc++.h>
using namespace std;
void rev(vector<int> &arr,int s,int n)
{
   if(s>=n/2)
   {
    return;
   }
   swap(arr[s],arr[n-s-1]);
   rev(arr,s+1,n);
  
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
  rev(arr,0,n);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}