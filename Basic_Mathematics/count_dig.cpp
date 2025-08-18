#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n==0)
  {
    cout<<"Number of Digits in "<<n<<" is "<<1;
    return 0;
  }
  
  cout<<"Number of Digits in "<<n<<" is "<<log10(n)+1;
  return 0;
}