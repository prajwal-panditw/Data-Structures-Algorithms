#include <bits/stdc++.h>
using namespace std;
int main()
{
  int age;
  cin>>age;
  if(age<18)
  {
    cout<<"Not eligible for job";
  }
  else if(age>57)
  {
    cout<<"Retirement Time";
  }
  else{
    cout<<"Eligible for Job";
    if(age>=55&&age<=57)
    {
      cout<<", but retirement soon.";
    }
  }
  return 0;
}