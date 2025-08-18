#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
  for(char i='A';i<'A'+n;i++)
  {
    for(char j='A';j<=i;j++)
    {
      cout<<i<<" ";
    }
    cout<<"\n";
  }
  return;
}
int main()
{
  int n;
  cin>>n;
  print(n);
  return 0;
}