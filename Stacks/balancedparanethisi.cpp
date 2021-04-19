#include<bits/stdc++.h>
using namespace std;
/*class stack;
{
	vector<int>v;
	public:
		void push(int d)
		{
			
		}
		void pop()
		{
			
		}
		bool isempty()
		{
		 return v.size==0?true:false;
		}
}
*/
bool isbalance(char*a)
{
	stack<char>s;
	for(int i=0;a[i];i++)
	{
		char ch=a[i];
		switch(ch)
		{
	case '(':
	case '{':
	case'[':
	s.push(ch);
		break;
	case ')':
	if(s.empty()==true || s.top()!='(')
	{
	return false;
	}		
	s.pop();
	break;
	case '}':
		if(s.empty()==true || s.top()!='{')
	{
	return false;
	}		
	s.pop();
	break;
	case ']':
		if(s.empty()==true || s.top()!='[')
	{
	return false;
	}		
	s.pop();
	break;
  }

}
if(s.empty()==true)
{
	return true;
}
else{
return false;
	}
}
int main()
{
	//stack s;
	char a[]="{{a+b*(c+d)+[e+f]*x}}";
	if (isbalance(a))
	{
		cout<<"paranthesis is balanced"<<" ";
	}
	else
	{
		cout<<"parnthesis is not balanced"<<" ";
	}
}
