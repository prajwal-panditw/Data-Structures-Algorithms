#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n==0)
  {
    cout<<0;
    return 0;
  }
  int rev=0;
  while(n!=0)
  {
    int rem=n%10;
    rev=rev*10+rem;
    n/=10;
  }
  cout<<rev;
  return 0;

}