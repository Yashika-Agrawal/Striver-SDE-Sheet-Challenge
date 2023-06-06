#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &a, int n) 
{
     vector<int> ans;
       ans.push_back(-1);stack<int> s;
       s.push(a[n-1]);
       for(int i=n-2;i>=0;i--)
       {
               while(!s.empty() && s.top()<=a[i])
               {
                   s.pop();
               }
              int  ng= (s.empty())?(-1):( s.top());
               ans.push_back(ng);
               s.push(a[i]);
       }
       reverse(ans.begin(),ans.end());
       return ans;

}