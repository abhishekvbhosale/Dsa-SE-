#include <iostream>
#include <stdio.h>
using namespace std;
class harshal
{
        private :
                char str1[30];
                char str2[30];
        public :
        	void length()
        	{
        		int i;
        		for(i=0;str1[i]!=0;i++);
        		int n=i;
        		cout<<"The length of string 1 is\t"<<n<<'\n';
        		int j;
        		for(j=0;str2[j]!=0;j++);
        		int m=j;
        		cout<<"The length of string 2 is\t"<<m<<'\n';
        	}
                void get_string()
                {
                        cout<<"\n Enter string 1 \t";
                        cin>>str1;
                        cout<<"\n Enter string 2 \t";
                        cin>>str2;
                }
                void string_copy()
                {
                        int i;
                        cout<<"\n Before copying string 1 \t";
                        cout<<str1;
                        cout<<"\n Before copying string 2 \t";
                        cout<<str2;
                        for(i=0;str1[i]!='\0';i++)
                                str2[i]=str1[i];
                                str2[i]='\0';
                       cout<<"\n After copying string 1 \t";
                       cout<<str1;
                       cout<<"\n After copying string 2 \t";
                       cout<<str2;
                       cout<<"\n";
                }
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
		cout<<"Reverse String is\t"<<str1<<'\n';
                }
                void string_concat()
                {
                        int k=0;
                        int i;
                        int j;
                        char str3[30];
                        for(i=0;str1[i]!='\0';i++)
                        {
                                str3[k]=str1[i];
                                k++;
                        }
                        for(j=0;str2[j]!='\0';j++)
                        {
                                str3[k]=str2[j];
                                k++;
                        }
                        str3[k]='\0';
                         cout<<"\n String after concat is \t";
                        cout<<str3;
                        cout<<"\n";
                }
                void compare()
                {
                        int i;
                        int j;
                        int flag=0;
                        for(i=0;str1[i]!='\0';i++);
                        for(j=0;str2[j]!='\0';j++);
                        if(i!=j)
                                {cout<<"\n Strings are not equal";
                                        flag=1;}
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
                               { cout<<"\n Strings are equal";}
                        else
                               { cout<<"\n Strings are not equal";}
                        cout<<"\n";
                 }
                 void sub_string()
                 {
                 	char sub[20];
                 	int i;
                 	int j;
                 	int count=0;
                 	cout<<"\n Enter sub string for string 1\t";
                 	cin>>sub;
                 	for(j=0;sub[j]!='\0';j++);
                 	int n=j;
                 	cout<<"\n length of sub=\t"<<n;
                 	for(i=0;str1[i]!='\0';i++)
                 	{
                 		for(j=0;sub[j]!='\0';j++)
                 		{
                 			if(str1[i]==sub[j])
                 			{
                 				count++;
                 				break;
                 			}
                 		}
                 	}
                 	cout<<"\n length of count=\t"<<count;
                 	if(count==n)
                 		cout<<"\n It is a sub string"<<'\n';
                 	else
                 		cout<<"\n Not a sub string"<<'\n';
                 }			
};
int main()
{
        harshal s1;
        s1.get_string();
        int ch;
	char ch1;
	do
	{
		cout<<"Enter your choice"<<endl<<"\t1.String Length"<<endl<<"\t2.String copy"<<endl<<"\t3.String concantination"<<endl<<"\t4.Equal string"<<endl<<"\t5.String reverse"<<endl<<"\t6.Sub String"<<endl;
		cin>>ch;
	
		switch(ch)
		{
			case 1:
			{
				s1.length();
				break;
			}
			case 2:
			{
				s1.string_copy();
				break;	
			}
			case 3:
			{
				s1.string_concat();
				break;
			}
			case 4:
			{
				s1.compare();
				break;
			}
			case 5:
			{
				s1.string_reverse();
				break;
			}
			case 6:
			{
				s1.sub_string();
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
                                    
