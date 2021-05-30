#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100],maxl[100],maxr[100],n;
	cin>>n;
	for(int i=0; i<n ; i++)
	{
		cin>>arr[i];
	}
	maxl[0]=arr[0];
	for(int i=1; i<n; i++)
		/*if(arr[i]>maxl)
		{
			maxl=arr[i];
		}
		*/
		maxl[i] = max(maxl[i-1], arr[i]);
	maxr[n-1]=arr[n-1];
	for(int i=n-2; i>=0; i--)
		/*if(arr[i]>maxr)
		{
			maxr=arr[i];
		}*/
		maxr[i] = max(maxr[i+1], arr[i]);
	int water[n];
	for(int i=0; i<n; i++)
	{
		water[i]=min(maxl[i],maxr[i]);
	}
	int sum=0;
	for(int i=0; i<n; i++)
	{ 
		sum+=water[i]-arr[i];
	}
	cout<<sum;
}
