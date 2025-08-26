#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int j=n-1;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n/2;i++)
  {
    swap(arr[i],arr[j]);
    j--;
   
  }
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}