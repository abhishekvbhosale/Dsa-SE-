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
/*
class Stack2
{
		int maxsize;
		char str[50];
		int top;
	public:
		Stack2()
		{
			maxsize=50;
			top=-1;
		}
		void push(char s[])
		{
			if(!isFull())
			{
				++top;
				str[top]=s[];
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
*/
int main()
{
        Stack stack;
        //Stack2 ss;
        char exp[20];
        int n1,n2,n3,num;
    cout<<"Enter the Expression:\n";
    cin>>exp;
    int i=0;
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
        {
            num=exp[i]-48;
            stack.push(num);
        }
        else
        {
            n1=stack.pop();
            n2=stack.pop();
            switch(exp[i])
            {
                case '+':
                    n3=n1+n2;
                    break;
                case '-':
                    n3=n1-n2;
                    break;
                case '*':
                    n3=n1*n2;
                    break;
                case '/':
                    n3=n1/n2;
                    break;
            }
            stack.push(n3);
        }
        i++;
    }
    cout<<"Result of the expression is:\t"<<exp<<stack.pop();
    return 0;
        //char* p;
      /*  cout<<"\n\tInput the expression-\n\t";
        cin>>exp;
        //char t1,t2;
        //p=exp;
        int i=0;
        while(exp[i]!='\0')
        {
               if(exp[i]>='1' && exp[i]<='9')
               {
                        stack.push(exp[i]);
                        i++;
               }
               else if(exp[i]>=42 && exp[i]<=47)
               {
                    char t2[1]={stack.pop()};
                    char t1[1]={stack.pop()};
                    char t3[1]={exp[i]};
                    char o[]="(";
                    char c[]=")";
                    strcat(o,t1);
                    strcat(o,t3);
                    strcat(o,t2);
                    strcat(o,c);
                    ss.push(o);
                    i++;
               }
               else
               {
                        cout<<"\nSomething is wrong";
                        i++;
               }    
        }
        char exp2[20];
        for(int j=0;j<i;j++)
                exp2[j]=ss.pop();
        cout<<exp2;
        */
        
}
