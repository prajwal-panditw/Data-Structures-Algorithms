#include <bits/stdc++.h>
using namespace std;
void sort_array(vector<int>&arr)
{
  int no_zero = 0, no_one = 0, no_two = 0;
  for (int i = 0; i < arr.size();i++)
  {
    if(arr[i]==0)
    {
      no_zero++;
    }
    else if(arr[i]==1)
    {
      no_one++;
    }
    else{
      no_two++;
    }
  }
  for (int i = 0; i < no_zero;i++)
  {
    arr[i] = 0;
  }
  for (int i = no_zero; i <(no_zero+no_one);i++)
  {
    arr[i] = 1;
  }
  for (int i =(no_zero+no_one); i < arr.size();i++)
  {
    arr[i] = 2;
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