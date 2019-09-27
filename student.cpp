
#include<iostream>
using namespace std;
int main()
{	
	int array[100];
	cout<<"\nEnter the total nuber of students"<<endl;
	int no;
	cin>>no;

	cout<<"\nEnter the Marks for "<<no<<" Students(Enter '-1' for Absent Students)"<<endl;
	for(int i=0;i<no;i++)
	{
		cout<<i+1<<":";
		cin>>array[i];
		cout<<endl;
	}

	cout<<"\nThe Marks of student are:"<<endl;
	for(int i=0;i<no;i++)
	cout<<i+1<<":"<<array[i]<<endl;
		char ch1;


int sum=0;
int sum1=0;
int count=0;
int max=0;
int min=100;
float avg;
int no1;
float avg1;
char a;
do

	{	
		cout<<"\nENTER YOUR CHOICE:\n1:SUM and TOTAL (With ABSENT):\n2:SUM and TOTAL (Without ABSENT):\n3:MAX:\n4:MIN:\n5:ONLY PRESENT(with marks):"<<endl;
		cin>>a;
		switch(a)
		{
			case '1':
				
				for(int i=0;i<no;i++)
				sum=sum+array[i];	
				cout<<"\nThe total of the array is(With ABSENT):"<<sum<<endl;
			
				avg=(float)sum/no;
				cout<<"\nAverage of the array elements is(WITH ABSENT):"<<avg<<endl;
				break;
			case '2':
				
				for(int i=0;i<no;i++)
				if(array[i]>0)
				sum1=sum1+array[i];	
				cout<<"\nThe total of the array is(Without ABSENT):"<<sum1<<endl;
				
				
				for(int i=0;i<no;i++)
				if(array[i]==-1)
				count++;
				no1=no-count;
				avg1=(float)sum1/(float)no1;
				cout<<"\nAverage of the array elements is(Without ABSENT):"<<avg1<<endl;
				break;
			case '3':
				
				for(int i=0;i<no;i++)
				if(array[i]>max)
					max=array[i];
				cout<<"\nThe highest marks in the array are:"<<max<<endl;
				break;
			case '4':
				
				for(int i=0;i<no;i++)
				{		if(array[i]!=-1)
				
						{
						if(array[i]<min)
						min=array[i];
						}
						
						
					
				}
				cout<<"\nThe lowest marks in the array are:"<<min<<endl;
				break;
	
			case '5':
				cout<<"\n The present students are(with marks):"<<endl;
			for(int i=0;i<no;i++)
				if(array[i]!=-1)
				cout<<i+1<<":"<<array[i]<<endl;
				break;
			
			default:
				cout<<"\nEnter from the cases given";
				break;
		
		}

		cout<<"\n\nDo you wish to continue(Enter Y or y for yes and any other character for No)"<<endl;
		cin>>ch1;
		
	}while(ch1=='y'||ch1=='Y');

	
	return 0;
}

