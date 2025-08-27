#include <bits/stdc++.h>
using namespace std;
bool is_sorted(vector<int>&arr)
{
  bool is_sor=true;
  for(int i=0;i<arr.size()-1;i++)
  {
    if(arr[i]>arr[i+1])
    {
      is_sor=false;
      return is_sor;
    }
  }
  return is_sor;
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
  if(is_sorted(arr))
  {
    cout<<"Array is Sorted";
  }
  else{
    cout<<"Array is not sorted";
  }
}