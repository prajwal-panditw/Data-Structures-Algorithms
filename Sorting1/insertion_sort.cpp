#include <bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>&arr)
{
 for(int i=0;i<arr.size()-1;i++)
 {
  int j=i+1;
  while(j>0&&arr[j-1]>arr[j])
  {
      swap(arr[j],arr[j-1]);
      j--;
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
  insertion_sort(arr);
  print_array(arr);
}