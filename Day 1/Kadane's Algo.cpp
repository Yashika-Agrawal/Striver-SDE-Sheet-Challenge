#include <bits/stdc++.h>

long long maxSubarraySum(int a[], int n)
{
    long long maxe = 0, maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxe = max(maxe + a[i], (long long)a[i]);
        maxi = max(maxi, maxe);
    }
    return maxi;
}
