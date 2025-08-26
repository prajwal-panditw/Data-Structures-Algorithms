#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>&arr)
{
  for(int i=arr.size()-1;i>0;i--)
  {
    bool is_sorted=true;
    for(int j=0;j<i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j],arr[j+1]);
        is_sorted=false;
      }
    }
    if(is_sorted)
    {
      return;
    }
  }
}
void print_array(vector<int>arr)
{
  for(int i=0;i<arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int n;
  cout<<"Enter the number of items: ";
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  bubble_sort(arr);
  print_array(arr);
}