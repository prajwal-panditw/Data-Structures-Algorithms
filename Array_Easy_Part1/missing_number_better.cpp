#include <bits/stdc++.h>
using namespace std;
int missing_number(vector<int>&arr)
{
  int n = arr.size();
  vector<int> freq(n + 1, 0);
  for (int i = 0; i < n;i++)
  {
    freq[arr[i]] = 1;
  }
  for (int i = 0; i < freq.size();i++)
  {
    if(freq[i]==0)
    {
      return i;
    }
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
  int key;
  cout << "Enter the element to be searched: ";
  int ans = missing_number(arr);
  cout << "Missing number: " <<ans;
}