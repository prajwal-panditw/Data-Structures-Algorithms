#include <bits/stdc++.h>
using namespace std;
int cnt=1;
void print()
{
  if(cnt>4)
  {
    return;
  }
  cout<<cnt<<"\n";
  cnt++;
  print();
}
int main()
{
  print();
}