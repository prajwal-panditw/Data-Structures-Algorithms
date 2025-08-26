#include <bits/stdc++.h>
using namespace std;
void selection_sort(vector<int>&arr)
{
  for(int i=0;i<arr.size()-1;i++)
  {
    int min=i;
    for(int j=i+1;j<arr.size();j++)
    {
      if(arr[min]>arr[j])
      {
        min=j;
      }
    }
    swap(arr[i],arr[min]);

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
  selection_sort(arr);
  print_array(arr);
}