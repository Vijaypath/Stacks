#include<bits/stdc++.h>
using namespace std;
vector<int> NGR(int arr[], int n) {
//	int n=arr.size();
	vector<int>v(n);
	stack<int>s;
	for(int i=n-1; i>=0; i--)
	{
		if(s.size()==0)
		{
		v.push_back(-1);
		s.push(arr[i]);
	   }
		else if(s.size()>0 && s.top()>arr[i])
		{
			v.push_back(s.top());
			s.push(arr[i]);
		}
		else if(s.size()>0 && s.top()<=arr[i])
		{
			while(s.size()>0 && s.top()<=arr[i])
			{
				s.pop();
				//s.push(arr[i]);
			}
			if(s.size()==0)
			{
			v.push_back(-1);
			s.push(arr[i]);
		}
			
	//	else if(s.top()>arr[i])
		else
		{
			v.push_back(s.top());
			s.push(arr[i]);
		}
		}
		s.push(arr[i]);
	}
	//in NGR when we traverse last element of stack and store the results in a vector 
	// after stor it you need to reverse the vector.
	reverse(v.begin(), v.end());  
	
	return v;
}
int main()
{
	int arr[]={1,3,2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	/*cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	*/
	vector<int> v=NGR(arr,n);
	for(int i=0; i<n; i++)
	{
		cout<<v[i]<<" ";
	}
//	return 0;
}
