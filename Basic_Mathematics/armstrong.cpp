#include <bits/stdc++.h>
using namespace std;
    bool armstrongNumber(int n) {
        // code here
        int arm=0,cmp=n;
        while(n!=0)
        {
            int rem=n%10;
            arm+=rem*rem*rem;
            n/=10;
        }
        if(arm==cmp)
        {
            return true;
        }
        return false;
    }
    int main()
    {
      int n;
      cin>>n;
      if(armstrongNumber(n))
      {
        cout<<"True";
      }
      else{
        cout<<"False";
      }
      return 0;
    }