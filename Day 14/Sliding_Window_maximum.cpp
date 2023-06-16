#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &a, int &k)
{  int n=a.size();
    vector<int> ans;
    deque<int>dq;
    // push elements till window size in starting
    for(int i=0;i<k;i++)
    {
        while(!dq.empty() && a[i]>=a[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        ans.push_back(a[dq.front()]);
       // remove elements which are not in window size
       while(!dq.empty() && dq.front() <=i-k)
       {
           dq.pop_front();
       }
       //put greater elements in back
       while(!dq.empty() && a[i]>=a[dq.back()])
       {
           dq.pop_back();
       }
       dq.push_back(i);
    }
    //last window element not printed before 
    ans.push_back(a[dq.front()]);
    return ans;

}