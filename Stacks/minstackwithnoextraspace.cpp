#include<bits/stdc++.h>
using namespace std;
stack<int>s;
int getmin()
{
	if(s.size()==0)
	   return -1;
	   
	   return mele;
}
void push(int x)
{
	if(s.size()==0)
	  s.push(x);
	  return x;
	  else {
	  if(x>= mele)
	  s.push(x);
	  
	  else if(x<mele)
	  s.push(2*x-mele)  //Logic to reduce extra space
	  mele=x;
	  	
	  }
}

void pop()
{
	if(s.size()==0)
	 return -1;
	 else
	 {
	 	if( s.top()>=mele)
	 	  s.pop();
	 	  
	 	  else if(s.top()<mele)
	 	        mele=2*mele-s.top();
	 	        s.pop();
	 }
}

int top()
{
	if(s.size()==0)
	  return -1;
	  else
	  {
	  	if(s.top()>mele)
	  	       return s.top();
	  	else if(s.top()<mele)
	  	      return mele;
	  }
}
