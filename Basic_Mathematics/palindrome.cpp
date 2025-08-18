#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int comp=n;
  cout<<boolalpha;
  if(n==0)
  {
    cout<<true;
    return 0;
  }
  int rev=0;
  while(n!=0)
  {
    int rem=n%10;
    rev=rev*10+rem;
    n/=10;
  }
  if(rev==comp)
  {
    cout<<true;
  }
  else{
    cout<<false;
  }
  return 0;

}