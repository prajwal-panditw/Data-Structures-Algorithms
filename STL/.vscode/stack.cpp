#include <bits/stdc++.h>
using namespace std;
int main()
{
  // stack<int>s,s1;
  // s.push(1);
  // s.push(2);
  // s.push(3);
  // cout<<s.size()<<endl<<" ";
  // cout<<s.top()<<endl<<" ";
  // s.pop();
  // cout<<s.top()<<endl;
  // cout<<s.size()<<endl;
  // s.emplace(4);
  // cout<<s.size();
  // cout<<boolalpha;
  // cout<<endl<<s.empty();
  // s1.push(10);
  // s1.push(9);
  // s1.swap(s);
  // cout<<endl<<s.top();
  stack<int>st;
  for(int i=1;i<=5;i++)
  {
    st.push(i);
  }
  // cout<<st.top();
  while(!st.empty())
  {
    cout<<st.top()<<"\n";
    st.pop();

  }
}