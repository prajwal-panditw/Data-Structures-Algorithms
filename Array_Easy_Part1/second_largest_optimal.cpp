#include <bits/stdc++.h>
using namespace std;
int Second_largest_element(vector<int>&arr)
{
  int lar=arr[0],sec=INT_MIN;
  for(int i=1;i<arr.size();i++)
  {
    if(arr[i]>lar)
    {
      sec=lar;
      lar=arr[i];
    }
    else if(sec<arr[i]&&lar!=arr[i])
    {
      sec=arr[i];
    }
  }
  return sec;

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
  cout<<"Second Largest element: "<<Second_largest_element(arr);
}