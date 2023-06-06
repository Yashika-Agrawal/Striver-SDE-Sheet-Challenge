#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &a) 
{
    vector<int> ans;
       stack<int>s;
       s.push(0);
       ans.push_back(1);
       for(int i=1;i<a.size();i++)
       {
           while(!s.empty() && a[s.top()]<=a[i])
           {
               s.pop();
           }
           int span=s.empty()? i+1: i-s.top();
           ans.push_back(span);
           s.push(i); //process remaining elements
       }
       return ans;
       
}