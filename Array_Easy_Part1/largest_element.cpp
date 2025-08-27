#include <bits/stdc++.h>
using namespace std;
int largest_element(vector<int>&arr)
{
  int lar=arr[0];
  for(int i=1;i<arr.size();i++)
  {
    if(lar<arr[i])
    {
      lar=arr[i];
    }
  }
  return lar;

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
  cout<<"Largest element: "<<largest_element(arr);
}