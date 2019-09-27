#include <iostream>
using namespace std;
class sparse
        {       
                private :
                int rows;
                int columns;
                int elements;
                int a[10][3];
               
                
                public :
                sparse()
                {
                
                }
                void get()
                {
                         rows=0;
                         columns=0;
                         elements=0;
                        
                         int i;
                        int j;
                         
                
                        cout<<"\nEnter the number of Rows : ";
                        cin>>rows;
                        cout<<"\nEnter the number of Columns : ";
                        cin>>columns;
                        cout<<"\nEnter the number of Non-Zero elements : ";
                        cin>>elements;
                        for(i=0;i<elements;i++)
                        {
                                for(j=0;j<3;j++)
                                {
                                        a[i][j]=0;
                                }
                               
                        }
              
                cout<<"\n Enter the elements of matrix : ";
                        a[0][0]=rows;
                        a[0][1]=columns;
                        a[0][2]=elements;
                        for(i=1;i<(elements+1 );i++)
                                {
                                        for(j=0;j<3;j++)
                                        {
                                                cin>>a[i][j];
                                         }
                                 }
                                 cout<<"\nDone";
                }
                void show()
                {
                             int i;
                             int j;
                        cout<<"\nThe sparse matrix is : \n";
                        for(i=0;i<(elements+1);i++)
                        {
                                for(j=0;j<3;j++)
                                {
                                        cout<<a[i][j]<<"\t";
                                }
                                cout<<"\n";
                        }
                }
                sparse operator +(sparse& s)
                {
                        sparse c;
                        int i;
                        int j;
                        int k;
                        i=j=k=1;
                        int m;  //number of non zero elements in 1st
                        int n;  //number of non zero elements in 2nd
                        int c[k][2];
                        m=a[0][2];
                        n=s.a[0][2];
                        c[0][0]=a[0][0];
                        c[0][1]=a[0][1];
                        while (i<=m && j<=n)
                        {
                                if(a[i][0]==s.a[j][0])
                                {
                                        if(a[i][1]==s.a[j][1])
                                        {
                                                c[k][0]=a[i][0];
                                                c[k][1]=a[i][1];
                                                c[k][2]=a[i][2];
                                                i++;j++;k++;
                                        }
                                        else if (a[i][1]<s.a[j][1])
                                        {
                                                c[k][0]=a[i][0];
                                                c[k][1]=a[i][1];
                                                c[k][2]=a[i][2];
                                                i++;k++;
                                         }
                                         else
                                         {
                                                c[k][0]=s.a[j][0];
                                                c[k][1]=s.a[j][1];
                                                c[k][2]=s.a[j][2];
                                                j++;k++;
                                          }
                                   }
                                   else if(a[i][0]=s.a[j][0])
                                   {
                                                c[k][0]=a[i][0];
                                                c[k][1]=a[i][1];
                                                c[k][2]=a[i][2];
                                                i++;k++;
                                   }
                                   else
                                         {
                                                c[k][0]=s.a[j][0];
                                                c[k][1]=s.a[j][1];
                                                c[k][2]=s.a[j][2];
                                                j++;k++;
                                          }
                        }
                        while(i<=m)
                        {
                                                c[k][0]=a[i][0];
                                                c[k][1]=a[i][1];
                                                c[k][2]=a[i][2];
                                                i++;k++;
                       }
                       while(j<=n)
                       {
                                                c[k][0]=s.a[j][0];
                                                c[k][1]=s.a[j][1];
                                                c[k][2]=s.a[j][2];
                                                j++;k++;
                       }
                                       c[0][2]=k-1;
                                       return c[k][2];
               }
                        
     };
  int main()
  {
        sparse s1;
        s1.get();
        s1.show();
        sparse s2;
        s2.get();
        s2.show();
        sparse s3=s1+s2;
        s3.show();
  }                           
