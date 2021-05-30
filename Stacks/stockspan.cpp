#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={10,5,11,10,20,12};
int n=sizeof(arr)/sizeof(arr[0]);	
	
 vector<int>v;
stack<pair<int,int>>s;
	for(int i=0; i<n; i++)
	{
		if(s.size()==0)
		{
		v.push_back(-1);
		//s.push(arr[i]);
	   }
		else if(s.size()>0 && s.top().first>arr[i])
		{
			v.push_back(s.top().second);
			//s.push(arr[i]);
		}
		else if(s.size()>0 && s.top().first<=arr[i])
		{
			while(s.size()>0 && s.top().first<=arr[i])
			{
				s.pop();
			}
			if(s.size()==0)
			v.push_back(-1);
		//	s.push(arr[i]);
		
			
	//	else if(s.top()>arr[i])
		else
			v.push_back(s.top().second);
			//s.push(arr[i]);
		}
		s.push(arr[i],i);
	}
	
	for(int i=0;i<v.size(); i++)
	{
		v[i]=i-v[i];
	}
     for(int i=0;i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	
	 
}


	
