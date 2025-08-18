#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<int,int>mpp;
  map<int,pair<int,int>>mpp1;
  map<pair<int,int>,int>mpp2;
  mpp[1]=2;
  mpp.insert({4,3});
  mpp.emplace(3,1);
  mpp2[{8,9}]=10;
  mpp1[6]={4,5};
  for(auto val:mpp)
  {
    cout<<val.first<<" "<<val.second<<endl;
  }
  cout<<mpp1[6].first<<" "<<mpp1[6].second<<endl;
  cout<<mpp2[{8,9}]<<endl;
  cout<<mpp[1000]<<endl;
  auto it=mpp.find(3);
  cout<<(*it).first<<" "<<(*it).second<<endl;
  mpp.erase(3);
  mpp.erase(1000);
    for(auto val:mpp)
  {
    cout<<val.first<<" "<<val.second<<endl;
  }
  mpp[6]=5;
  mpp[7]=8;
    for(auto val:mpp)
  {
    cout<<val.first<<" "<<val.second<<endl;
  }
mpp.erase(mpp.lower_bound(4),mpp.lower_bound(7));
  for(auto val:mpp)
  {
    cout<<val.first<<" "<<val.second<<endl;
  }

}