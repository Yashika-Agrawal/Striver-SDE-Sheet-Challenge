#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	stack<int> s,s1;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int x)
		{
			s.push(x);
           if(s1.empty() || x<=s1.top())
           {
               s1.push(x);
           }
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if (s.empty()) 
			{
            	return -1;;
            }

			int popped = s.top();
			s.pop();

			if (popped == s1.top()) {
				s1.pop();
			}
			return popped;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(s.empty())
			{
				return -1;
			}
			return s.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(s1.empty())
			{
				return -1;
			}
			 return s1.top();
		}
};