#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[]={10,5,11,10,20,12};
int n=sizeof(arr)/sizeof(arr[0]);	
 stack<pair<int,int>>s;
 	
 vector<int>left;
 vector<int>right;
 int pseudoidx=-1;
	for(int i=0; i<n; i++)
	{
		if(s.size()==0)
		{
		right.push_back(-1);
		//s.push(arr[i]);
	   }
		else if(s.size()>0 && s.top().first<arr[i])
		{
			right.push_back(s.top().second);
			//s.push(arr[i]);
		}
		else if(s.size()>0 && s.top().first>=arr[i])
		{
			while(s.size()>0 && s.top().first>=arr[i])
			{
				s.pop();
			}
			if(s.size()==0)
			right.push_back(-1);
		//	s.push(arr[i]);
		
			
	//	else if(s.top()>arr[i])
		else
			right.push_back(s.top().second);
			//s.push(arr[i]);
		}
		s.push(arr[i],i);
	}
	
	
	for(int i=n-1; i>=0; i--)
	{
		if(s.size()==0)
		{
		left.push_back(n);
		//s.push(arr[i]);
	   }
		else if(s.size()>0 && s.top().first<arr[i])
		{
			left.push_back(s.top().second);
			//s.push(arr[i]);
		}
		else if(s.size()>0 && s.top().first>=arr[i])
		{
			while(s.size()>0 && s.top().first>=arr[i])
			{
				s.pop();
			}
			if(s.size()==0)
			left.push_back(n);
		//	s.push(arr[i]);
		
			
	//	else if(s.top()>arr[i])
		else
			left.push_back(s.top().second);
			//s.push(arr[i]);
		}
		s.push(arr[i],i);
	}
	
	int ans=INT_MIN;
	for(int i=0; i<n; i++)
	{
right[i]=(left[n-i-1]-right[i]-1)*arr[i];
            ans=max(ans,right[i]);
	}
	
	return ans;
     
}


	
