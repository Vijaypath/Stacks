#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<char>q;
	int freqmap[26]={0};a
	char ch;
	cin>>ch;
	while(ch!='.')
	{
		q.push(ch);
		freqmap[ch-'a']++;
		
		while(!q.empty() && freqmap[q.front() -'a']>1)
		  q.pop();
		  if(q.empty())
		  cout<<-1<<" ";
		  else 
		  cout<<q.front()<<" ";
		  cin>>ch;
	}
}
