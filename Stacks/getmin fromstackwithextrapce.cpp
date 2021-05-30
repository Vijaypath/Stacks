#include<bits/stdc++.h>
using namespace std;

stack<int>s;
stack<int>ss;

void push(int a)
{
	if(s.size()==0 || ss.top()>=a)
	  ss.push(a);
	  return;
}

void pop()
{
	if(s.size()==0)
	 return -1;
	 int ans=s.top();
	 s.pop();
	 if(ss.top()==ans)
	 	 ss.pop();
	 	 
	 	 return ans;
}
int getmin()
{
	if(ss.size==0)
	return -1;
	
	return ss.top();
}





