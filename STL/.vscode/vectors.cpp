#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v;
  v.push_back(1);
  v.emplace_back(2);
  v.push_back(3);
  v.emplace_back(4);
  vector<pair<int,int>>vec;
  vec.push_back({1,2});
  vec.emplace_back(3,4);
  vector<int>c(5,100);
  vector<int>d(5);
  vector<int>e(5,20);
  vector<int>f(e);
  vector<int>::iterator it=v.begin();
  cout<<&(*it)<<" "<<*(it)<<endl;
  it++;
  cout<<&(*it)<<" "<<*(it)<<endl;
  cout<<v.back()<<endl;
  //using normal loop if size is known
  for(int i=0;i<5;i++)
  {
    cout<<f[i]<<" ";
  }
  //using iterator
  cout<<endl;
  for(auto it=v.begin();it!=v.end();it++)
  {
    cout<<*it<<" ";
  }
  //using foreach loop
  cout<<endl;
  for(auto r:vec)
  {
    cout<<r.first<<" "<<r.second<<"\n";
  }
  v={10,20,30,40,50,60,90,100,120};
  v.erase(v.begin()+1);
  for(auto g:v)
  {
    cout<<g<<" ";
  }
  //Task erase 30-90
  v.erase(v.begin()+1,v.end()-2);
  cout<<endl;
  for(auto g:v)
  {
    cout<<g<<" ";
  }
  v={10,20,30,40,50};
  v.insert(v.begin(),0);
    cout<<endl;
  for(auto g:v)
  {
    cout<<g<<" ";
  }
  v.insert(v.end(),2,60);
      cout<<endl;
  for(auto g:v)
  {
    cout<<g<<" ";
  }
  v.erase(v.end()-1);
  vector<int>fv={70,80,90,100};
  v.insert(v.end(),fv.begin(),fv.end());
  cout<<endl;
    for(auto g:v)
  {
    cout<<g<<" ";
  }
  cout<<endl;
  cout<<c.size()<<"\n";
  v.pop_back();
    for(auto g:v)
  {
    cout<<g<<" ";
  }
  vector<int>v1={8,9};
  vector<int>v2={10,11};
  v1.swap(v2);
  cout<<endl;
  for(int g:v1)
  {
    cout<<g<<" ";
  }
  cout<<endl;
  for(int e:v2)
  {
    cout<<e<<" ";
  }
  cout<<endl;
  c.clear();
  cout<<boolalpha;
  cout<<c.empty();
  
}