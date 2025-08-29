#include <bits/stdc++.h>
using namespace std;
vector<int> Union(vector<int>&arr1,vector<int>&arr2)
{
  set<int>ans;
  for (int i = 0; i < arr1.size();i++)
  {
    ans.insert(arr1[i]);
  }
  for (int i = 0; i < arr2.size();i++)
  {
    ans.insert(arr2[i]);
  }
  vector<int> _Union;
  for (auto x:ans)
  {
    _Union.push_back(x);
  }
  return _Union;
}
int main()
{
  int a, b;
  cout << "Enter number of items in first array: ";
  cin >> a;
  vector<int> arr1(a);
  for (int i = 0; i < a;i++)
  {
    cin >> arr1[i];
  }
  cout << "Enter number of items in second array: ";
  cin >> b;
  vector<int>arr2(b);
  for (int i = 0; i < b;i++)
  {
    cin >> arr2[i];
  }
  vector<int> ans = Union(arr1, arr2);
  for (int i = 0; i < ans.size();i++)
  {
    cout << ans[i] << " ";
  }
}