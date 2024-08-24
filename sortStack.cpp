#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	vector<int> arr;
	 while (!stack.empty()) {
        arr.push_back(stack.top());
        stack.pop();
    }
	sort(arr.begin(),arr.end(),std::greater<int>());
	reverse(arr.begin(),arr.end());
	for(int i = 0;i<arr.size();i++)
	{
		stack.push(arr[i]);
	}
	
}
//use multiset. maintains in sorted order.
