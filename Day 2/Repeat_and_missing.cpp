#include <bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &a, int n)
{
	pair<int, int>p;
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		mp[a[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(mp[i]==0)
		{
			p.first=i;
		}
		if(mp[i]==2)
		{
			p.second=i;
		}
	}
	return p;
	
}
