#include<iostream>
using namespace std;
#define max 50
class Stack
{
		char* a[max];
		int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(char* p)
		{
			if(!isFull())
				a[top++]=p;
		}
		char* pop()
		{
			if (!isEmpty())
				return a[--top];
		}
		int isFull()
		{
			return top==max-1;
		}
		int isEmpty()
		{
			return top==-1;
		}
};
int main()
{
	Stack s;
	char* p="Abcd";
	char* q="1234";
	char* r="!@#$";
	s.push(p);
	s.push(q);
	s.push(r);
	cout<<endl<<s.pop();
	cout<<endl<<s.pop();
	cout<<endl<<s.pop()<<endl;
	return 0;
}