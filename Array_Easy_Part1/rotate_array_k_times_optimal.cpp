#include <bits/stdc++.h>
using namespace std;
void Rotated_Array_1_place(vector<int>&arr,int d)
{
  int n = arr.size();
  reverse(arr.begin(), arr.end());
  reverse(arr.begin(), arr.begin()+(n-d));
  reverse(arr.begin() + (n - d) , arr.end());
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