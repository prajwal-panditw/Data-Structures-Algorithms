#include <iostream>
#include <vector>
#include <bits/stdc++.h> // Including this as you used it

using namespace std;

// Your original logic, now in a standalone function.
int removeDuplicates(vector<int>& arr) {
    int swp=1, nex=0, c=1;
    // Handle the edge case of an empty array
    if (arr.empty()) {
        return 0;
    }
    for(int i=1; i<arr.size(); i++)
    {
        if(arr[i] != arr[i-1])
        {
            nex=i;
            c++;
            arr[swp]=arr[nex];
            swp++;
        }
        
    }
    return c;
}

// Main function to test your code
int main()
{
  int n;
  cout<<"Enter number of items: ";
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<removeDuplicates(arr)<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
