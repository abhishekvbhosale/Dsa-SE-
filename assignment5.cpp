#include<iostream>
#include<string.h>
using namespace std;
class String
{
	public:
	char str1[10];
	char str2[10];
	char str3[10];
	void get_string()
	{
		cout<<"Enter string 1:";
		cin>>str1;
		cout<<"Enter string 2:";
		cin>>str2;
		cout<<endl;
	}
	void display_string()
	{
		cout<<"string 1:"<<str1<<endl;
		cout<<"string 2:"<<str2<<endl;
	}
	void sting_copy()
	{
		for(int i=0;str1[i]!='\0';i++)
			{str2[i]=str1[i];}
		//str2[i]='\0';
		cout<<"string after copy:"<<str2<<endl;
	}
	void string_concantination()
	{
		int k;
		int i;
		int j;
		for(i=0;str1[i]!='\0';i++){}
		j=0;
		while(str2[j]!='\0')
		{
			str1[i]=str2[j];
			i++;
			j++;
		}
		str1[i]='\0';
		cout<<str1<<endl;
	}
	void string_equal()
	{
		int i;
		int j;
		int flag=0;
		
		for(i=0;str1[i]!='\0';i++);
		for(j=0;str2[j]!='\0';j++);
		
		if(i!=j)
			{
			cout<<"Strings are not equal"<<endl;
			flag=1;
			}
		else
		{
			for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
			{
				if(str1[i]!=str2[j])
					{
						flag=1;
						break;
					}
			}
		}
		if(flag==0)
			{cout<<"Strings are equal"<<endl;}
		else
			{cout<<"Strings are not equal"<<endl;}
	}
	/*void string_sub();*/
	void string_reverse()
	{
		int i;
		int j;
		char temp;
		for(i=0;str1[i]!='\0';i++){}
		int n=i;
		j=n-1;
		for(i=0;i<j;i++,j--)
		{
			temp=str1[i];
			str1[i]=str1[j];
			str1[j]=temp;
		}
		cout<<"Reverse String"<<str1;
	}
	void string_length()
	{
		int i;
		int j;
		for(i=0;str1[i]!='\0';i++){}
			int n=i;
		
		for(j=0;str2[j]!='\0';j++){}
			int m=j;
		cout<<"length of string 1:"<<n<<endl<<"length of string 2:"<<m<<endl;
	}
};
int main()
{
	string_operation so1,so;
	so.get_string();
	so.display_string();
	int ch;
	char ch1;
	do
	{
		cout<<"Enter your choice"<<endl<<"\t1.String Length"<<endl<<"\t2.String copy"<<endl<<"\t3.String concantination"<<endl<<"\t4.Equal string"<<endl<<"\t5.String reverse"<<endl;
		cin>>ch;
	
		switch(ch)
		{
			case 1:
			{
				so.string_length();
				break;
			}
			case 2:
			{
				so.sting_copy();
				break;	
			}
			case 3:
			{
				so.string_concantination();
				break;
			}
			case 4:
			{
				so.string_equal();
				break;
			}
			case 5:
			{
				so.string_reverse();
				break;
			}
			default:
			{
				cout<<"\nEnter from the cases given";
				break;
			}
		}
	cout<<"\n\nDo you wish to continue(Enter Y or y for yes and any other character for No)"<<endl;
		cin>>ch1;
	}while(ch1=='y'||ch1=='Y');
	return 0;
		
}

