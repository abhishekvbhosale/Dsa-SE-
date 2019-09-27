#include <iostream>
using namespace std;
class Stack
{
		int maxsize;
		char str[50];
		int top;
	public:
		Stack()
		{
			maxsize=50;
			top=-1;
		}
		void push(char s)
		{
			if(!isFull())
			{
				++top;
				str[top]=s;
			}
			else
				cout<<"\nStack overflow";
		}
		char pop()
		{
			if(!isEmpty())
				return str[top--];
			else
				cout<<"\nStack is empty";
		}
		int isFull()
		{
			if(top==maxsize)
				return 1;
			else
				return 0;
		}
		int isEmpty()
		{
			if(top==-1)
				return 1;
			else
				return 0;
		}
};
