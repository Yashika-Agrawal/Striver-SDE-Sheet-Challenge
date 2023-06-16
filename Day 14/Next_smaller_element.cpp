#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> nextSmallerElement(vector<int> &a, int n)
{
    stack<int> st;
    st.push(a[n - 1]);
    vector<int> ans;
    ans.push_back(-1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= a[i])
        {
            st.pop();
        }
        int ns = (st.empty() ? -1 : st.top());
        ans.push_back(ns);
        st.push(a[i]); // Push the current element onto the stack
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
