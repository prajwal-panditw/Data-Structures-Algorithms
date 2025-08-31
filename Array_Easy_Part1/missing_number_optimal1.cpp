#include <bits/stdc++.h>
using namespace std;
int missing_number(vector<int>&arr)
{
  int n = arr.size();
  int s = 0;
  int total = n * (n + 1) / 2;
  for (int i = 0; i < arr.size();i++)
  {
    s += arr[i];
  }
  return total - s;
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
  int ans = missing_number(arr);
  cout << "Missing number: " <<ans;
}