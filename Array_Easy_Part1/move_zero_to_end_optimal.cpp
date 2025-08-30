#include <bits/stdc++.h>
using namespace std;
void Move_Zero_To_End(vector<int>&arr)
{
  int j = -1;
  for (int i = 0; i < arr.size();i++)
  {
    if(arr[i]==0)
    {
      j = i;
      break;
    }
  }
  if(j==-1)
  {
    return;
  }
  for (int i = j + 1; i< arr.size();i++)
  {
    if(arr[i]!=0)
    {
      swap(arr[i], arr[j]);
      j++;
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
  Move_Zero_To_End(arr);
  Print_Array(arr);
}