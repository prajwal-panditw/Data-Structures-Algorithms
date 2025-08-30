#include <bits/stdc++.h>
using namespace std;
void Rotated_Array_1_place(vector<int>&arr)
{
  int replace_ele = arr[0];
  for (int i = 0; i < arr.size() - 1;i++)
  {
    arr[i] = arr[i + 1];
  }
  arr.back() = replace_ele;
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
  Rotated_Array_1_place(arr);
  Print_Array(arr);
}