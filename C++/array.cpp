#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5];
  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
  cout<<arr[0]<<" "<<arr[4]<<endl;
  cout<<arr[1]<<" ";
  arr[1]=90;
  cout<<arr[1]<<endl;
  //2D array
  int td[3][5];
  td[2][4]=56;
  cout<<td[0][0]<<" "<<td[2][4];
  return 0;
}