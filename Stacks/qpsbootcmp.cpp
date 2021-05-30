#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>prices(n);
	for(int i=0;i<n;i++)
	{
		cin>>prices[i];
	}
	vector<int>out(n);
	stack<int>st;
	for(int i=0; i<prices.size();i++)
	{
		while(!st.empty() && prices[st.top()]<=prices[i])
		{
			st.pop();
		}
		out[i]=st.empty() ? i+1 :i-st.top();
		st.push(i);
	}
	for(int i=0;i<out.size();i++)
	{
		cout<<out[i]<<" ";
}
}
