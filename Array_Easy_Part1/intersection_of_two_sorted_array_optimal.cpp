#include <bits/stdc++.h>
using namespace std;
vector<int>Intersection_Array(vector<int>&arr1,vector<int>&arr2)
{
  int i = 0, j = 0;
  int n1 = arr1.size();
  int n2 = arr2.size();
  vector<int> Uni;
  while(i<n1&&j<n2)
  {
    if(arr1[i]==arr2[j])
    {
      if(Uni.size()==0||arr1[i]!=Uni.back())
      {
         Uni.push_back(arr1[i]);
        
      }
      i++;
      j++;
      }
      else if(arr1[i]>arr2[j])
      {
        j++;
      }
      else{
        i++;
      }
    

  }
  return Uni;
}
int main()
{
  int n1,n2;
  cout<<"Enter number of items in array 1: ";
  cin>>n1;
  vector<int>arr1(n1);
  for(int i=0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  cout << "Enter number of items in array 2: ";
  cin >> n2;
  vector<int> arr2(n2);
  for (int i = 0; i < n2;i++)
  {
    cin >> arr2[i];
  }
  vector<int> ans = Intersection_Array(arr1, arr2);
  for (int i = 0; i < ans.size();i++)
  {
    cout << ans[i] << " ";
  }
}