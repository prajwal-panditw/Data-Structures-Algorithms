#include <bits/stdc++.h>
using namespace std;
int main()
{
  int marks;
  cin>>marks;
  if(marks<0)
  {
    cout<<"Invalid";
  }
  else if(marks<25)
  {
    cout<<"F Grade";
  }
  else if(marks<=44)
  {
    cout<<"E Grade";
  }
  else if(marks<=49)
  {
    cout<<"D Grade";
  }
  else if(marks<=59)
  {
    cout<<"C Grade";
  }
  else if(marks<=79)
  {
    cout<<"B Grade";
  }
  else if(marks<=100)
  {
    cout<<"A Grade";
  }
  else{
    cout<<"Invalid marks";
  }
  return 0;

}