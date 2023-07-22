#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > a) {
   int sum=0; int n=a.size();
  unordered_map<int,int>mp; int p=0; int res=0;
  for(int i=0;i<n;i++)
  {
    p=p+a[i];
    if(p==sum) res=i+1;
    if(mp.find(p)==mp.end())
    {
      mp.insert({p, i});
    }
    if(mp.find(p-sum)!=mp.end())
    {
      res=max(res,i-mp[p-sum]);
    }
  }
  return res;

}