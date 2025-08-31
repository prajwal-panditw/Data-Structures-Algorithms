#include <bits/stdc++.h>
using namespace std;
int missing_number(vector<int>&arr)
{
  int xor1=0,xor2=0;
  int n = arr.size();
  for (int i = 0;i<n; i++)
  {
    xor1 ^= (i + 1);
    xor2 ^= arr[i];
  }
  return xor1^xor2;
}
int main()
{
  int n;
  cout<<"Enter number of items: ";
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n-1;i++)
  {
    cin>>arr[i];
  }
  int ans = missing_number(arr);
  cout << "Missing number: " <<ans;
}