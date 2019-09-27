#include <iostream.h>
 using namespace std;
main ()
{
	int i,j,n;
    int a[i][j],b[i][j];

		cout<<"Enter the number of rows/columns : \n";
		cin>>n;
		cout<<"Enter elements for 1st matrix : \n";
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				{
					cin>>a[i][j];
				}
		cout<<"Enter elements for 2nd matrix : \n";
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					{
						cin>>b[i][j];
					}
		for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}
				for(i=0;i<n;i++)
				cout<<"The addition is \n"<<c[i][j];
