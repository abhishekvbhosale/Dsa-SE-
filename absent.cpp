#include<iostream>
using namespace std;
main()
	{
		int min,max,count=0,n,sum=0,i,marks[i],ch;
		float average;
                char ch1;
		
		cout<<"Enter the number of subjects ";
		cin>>n;
		cout<<"Enter the marks";
		for(i=0;i<n;i++)
			{
				cin>>marks[i];
			}
			cout<<"The marks are:";
		for(i=0;i<n;i++)
			{
				cout<<marks[i]<<endl;
			}	
			cout<<"Enter your choice:\n 1.NO of absent student\n 2.Minimum marks\n 3.Maximum marks\n 4.Total of marks 				       5.Average of marks\n";
			cin>>ch;

        do
	{ 
		switch (ch)
		{	
			case 1 :
 			
			for(i=0;i<n;i++)
			{
				if(marks[i]==-1)
				{
					count++;
				}
				
                          }
                         cout<<"No of absent studnts are:"<<count<<endl;
			break;
                       
			case 2 :
		    
			for(i=1;i<n;i++)
			{     min=marks[0];
				if(marks[i]>0)
				{
					if(marks[i]<min)
					{
						min=marks[i];
					}
				}	
			}
  		     
			cout<<"Minimum marks are"<<min;
			break;
                     
			case 3 :
		     
			for(i=0;i<n;i++)
			{
				if(marks[i]>max)
				{
					max=marks[i];
				}
			}
			cout<<"Maximum marks are"<<max;
			break;
		    	
			case 4 :
                           
			 	  for(i=0;i<n;i++)
			          {
					if(marks[i]>0)
				    	{
						sum=sum+marks[i];
				    	}
			          }
                             cout<<"The total marks are"<<sum;
				break;
                           
            case 5 :
                        {
			
				average=sum/n;
			
			cout<<"The average is:"<<average<<endl;
          		break;
                        }
                   }
                
                cout<<"Do you wish to continue(press 'Y' or 'y')";
                }
	        while(ch1=='Y'||ch1=='y');
		
	}
 
