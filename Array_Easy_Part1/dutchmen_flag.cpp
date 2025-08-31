#include <bits/stdc++.h>
using namespace std;
void sort_array(vector<int>&arr)
{
  int low = 0, high = arr.size() - 1, mid = 0;
  while(mid<=high)
  {
    if(arr[mid]==0)
    {
      swap(arr[mid], arr[low]);
      low++;
      mid++;
    }
    else if(arr[mid]==1)
    {
      mid++;
    }
    else{
      swap(arr[mid], arr[high]);
      high--;
    }
  }
}
void Print_Array(vector<int>&arr)
{
  for (int i = 0; i < arr.size();i++)
  {
    cout << arr[i] << " ";
  }
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
  sort_array(arr);
  Print_Array(arr);
}