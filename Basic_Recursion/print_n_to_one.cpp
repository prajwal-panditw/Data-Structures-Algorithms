#include <bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
 if(n-i<0)
 {
  return;
 } 
 cout<<n-i+1<<endl;
 print(i+1,n);
}
int main()
{
  int n;
  cin>>n;
  print(1,n);
}