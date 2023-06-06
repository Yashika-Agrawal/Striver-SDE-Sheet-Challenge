#include<bits/stdc++.h>
vector<int> previous(vector<int>& a, int n)
    {
        vector<int> ans;
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && a[st.top()]>=a[i])
            {
                st.pop();
            }
            int ps=(st.empty())?(-1):(st.top());
            ans.push_back(ps);
            st.push(i);
        }
        return ans;
    }
    vector<int> next(vector<int>& a, int n)
    {
        vector<int> ans;
        stack<int>st;
        st.push(-1);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && a[st.top()]>=a[i])
            {
                st.pop();
            }
            int ps=(st.empty())?(-1):(st.top());
            ans.push_back(ps);
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
 int largestRectangle(vector < int > &a) 
 {
   int maxans=INT_MIN; //initialize maxans area;
        int n=a.size();
       vector<int> ps=previous(a,n);
       vector<int> ns=next(a,n);
       for(int i=0;i<n;i++)
       {
           if(ns[i]==-1)
           {
               ns[i]=n;
           }
           int curr=(ns[i]-ps[i]-1)*a[i]; // width
           maxans=max(maxans,curr);
       }
       return maxans;
 }