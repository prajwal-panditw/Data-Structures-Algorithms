#include <bits/stdc++.h>
using namespace std;
bool comp( pair<int,int>p1,pair<int,int>p2)
{
  if(p1.second>p2.second)
  {
    return true;
  }
  else if(p1.second<p2.second)
  {
    return false;
  }
  else{
    if(p1.first>p2.first)
    {
      return true;
    }
  }
  return false;
}
int main()
{
  int arr[]={9,3,4,5,2,1,100,56};
  for(int val:arr)
  {
    cout<<val<<" ";
  }
  sort(arr,arr+8);
  cout<<endl;
  for(int val:arr)
  {
    cout<<val<<" ";
  }
  vector<int>a={5,6,7,1,2,3,9,3};
  cout<<endl;
    for(int val:a)
  {
    cout<<val<<" ";
  }
  sort(a.begin(),a.end());
  cout<<endl;
  for(int val:a)
  {
    cout<<val<<" ";
  }
  //Descending
  sort(a.begin(),a.end(),greater<int>());
   cout<<endl;
  for(int val:a)
  {
    cout<<val<<" ";
  }
  vector<int>ch={4,5,6,2,1,3};
  sort(ch.begin()+3,ch.end());
  cout<<endl;
  for(int val:ch)
  {
    cout<<val<<" ";
  }
  pair<int,int>p[]={{1,2},{2,1},{4,1}};
  cout<<endl;
  for(auto val:p)
  {
    cout<<val.first<<" "<<val.second<<endl;
  }
  sort(p,p+3,comp);
  cout<<endl;
  for(auto val:p)
  {
    cout<<val.first<<" "<<val.second<<endl;
  }
  
}