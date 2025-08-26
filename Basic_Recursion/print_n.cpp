#include <bits/stdc++.h>
using namespace std;
int c=1;
int n;

void print()
{
  if(c>n)
  {
    return;
  }
  cout<<"Prajwal"<<"\n";
  c++;
  print();
}
int main()
{
  cin>>n;
  print();
}