#include<bits/stdc++.h>
using namespace std;
class node
{
	public :
		node *next;
		int data;
		node(int d)
		{
			data=d;
			next=NULL;
		}
};

class Stack
{
	node* head;
		int cs;
	public:
		//vector<int>v;
		Stack()
		{
			head=NULL;
			cs=0;
		}
		void push(int d)
		{
			node *tmp=new node(d);
			tmp->next=head;
			head=tmp;
			cs++;
		}
		void pop()
		{
         if(head==NULL)
         {
         	return;
		 }
		 node* tmp=head;
		 head=head->next;
		 cs--;
		 delete tmp;
	}
		int top()
		{
			return head->data;
		}
		bool empty()
		{
			return head==NULL?true:false;
		}
		int size()
		{
			return cs;
		}
};
int main() {

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}
