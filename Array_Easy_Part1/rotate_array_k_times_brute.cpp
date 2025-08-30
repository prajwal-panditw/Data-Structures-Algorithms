#include <bits/stdc++.h>
using namespace std;
void Rotated_Array_1_place(vector<int>&arr,int d)
{
  vector<int> temp;
  int n = arr.size();
  d = d % arr.size();
  for (int i = 0; i < d;i++)
  {
    temp.push_back(arr[i]);
  }
  for (int i = d; i < arr.size();i++)
  {
    arr[i - d] = arr[i];
  }
  for (int i = n-d; i < arr.size();i++)
  {
    arr[i] = temp[i -(n-d)];
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
  int d;
  cout << "Enter number of rotations: ";
  cin >> d;
  Rotated_Array_1_place(arr,d);
  Print_Array(arr);
}