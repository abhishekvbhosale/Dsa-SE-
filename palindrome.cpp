#include <iostream>
#include <string.h>
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
int main()
{
	char str1[50];
	int len=0;
	cout<<"\nEnter a string\t";
	cin.getline(str1,50);
	for(int i=0;str1[i]!='\0';i++)
        {
                int ask;
                ask=str1[i];
                if(ask>=65 && ask<=90)
                {
                        ask=ask+32;
                        str1[i]=ask;
                }
        }
	Stack s1;
	char str3[50];
	int j;
	for(int i=0,j=0;str1[i]!='\0';i++)
		{
		        int ask=0;
		        ask=str1[i];
		        if(ask>=97 && ask<=122)
		        {
		        	s1.push(str1[i]);
		        	str3[j]=str1[i];
		        	j++;
			        len++;
			}
			
		}
	str3[len]='\0';
         cout<<"\nThe string after conversion is\n\t";
        cout<<str3<<endl;
	char str2[50];
	for(int i=0;i<len;i++)
		str2[i]=s1.pop();
	int flag=0;
	cout<"\nThe reverse string is\n\t";
	cout<<str2<<endl;
	for(int i=0;i<len;i++)
	{
		if(str3[i]==str2[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
		cout<<"\nThe string is palindrome\n";
	else
		cout<<"\nThe string is not palindrome\n";
}
