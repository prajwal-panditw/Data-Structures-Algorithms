#include <bits/stdc++.h>
using namespace std;
int linear_search(vector<int>&arr,int key)
{
  int ans = -1;
  for (int i = 0; i < arr.size();i++)
  {
    if(arr[i]==key)
    {
      ans = i;
      break;
    }
  }
  return ans;
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
  int key;
  cout << "Enter the element to be searched: ";
  cin >> key;
  int ind = linear_search(arr, key);
  if(ind==-1)
  {
    cout << "Element is not found!";
    return 0;
  }
  cout << "Element is found in index: " << ind;
}