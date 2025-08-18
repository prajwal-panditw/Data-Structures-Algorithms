#include <bits/stdc++.h>
using namespace std;
int main()
{
  int no=7;
  int cnt=__builtin_popcount(no);
  cout<<cnt<<endl;
  string s="231";
  sort(s.begin(),s.end());
  do{
    cout<<s<<" ";
  }while(next_permutation(s.begin(),s.end()));
  vector<int>ve={1,2,3,4,100,-282,45,18};
  int ma=*max_element(ve.begin(),ve.end());
  int mi=*min_element(ve.begin(),ve.end());
  cout<<endl;
  cout<<ma<<" "<<mi;
}