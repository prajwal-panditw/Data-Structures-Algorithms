#include <bits/stdc++.h>
using namespace std;
int main()
{
  pair<int,int>p={1,3};
  cout<<p.first<<" "<<p.second<<endl;
  pair<int,pair<int,int>>q={6,{7,8}};
  cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
  //Pair Array
  pair<int,int>arr[]={{20,21},{22,23},{24,25}};
  cout<<arr[1].second<<" "<<arr[0].first<<" "<<arr[2].second;
}