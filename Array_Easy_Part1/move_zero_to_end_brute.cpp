#include <bits/stdc++.h>
using namespace std;
void Move_Zero_To_End(vector<int>&arr)
{
  int n = arr.size();
  vector<int> temp(n, 0);
  int ind = 0;
  for (int i = 0; i < arr.size();i++)
  {
    if(arr[i]!=0)
    {
      temp[ind] = arr[i];
      ind++;
    }
  }
  arr = temp;
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