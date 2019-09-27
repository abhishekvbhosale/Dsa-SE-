#include <iostream>
#include<stdio.h>
#include <math.h>
using namespace std;
const int maxsize = 100;
struct polynomial_term
	{
		float coefficient;
		int exponent;
	};
class polynomial
	{
		private :
		polynomial_term poly[maxsize];
		int total_terms;
		public :
		polynomial ()
		{
			total_terms=0;
		}
		void readPoly();
		void showPoly()
		{
			cout<<"\n";
			for(int i=0;i<total_terms;i++)
			{
			 	if(i<total_terms-1)
			 	{
					cout<<poly[i].coefficient<<"X^"<<poly[i].exponent<<"+";
					
				}
				else
				{
					cout<<poly[i].coefficient<<"X^"<<poly[i].exponent;
					
				}
			}
		}
		double evaluate ()
		{
			int x;
			int sum=0;
			cout<<"\nEnter the value for X";
			cin>>x;
			for(int i=0;i<total_terms;i++)
			{
				 sum+=pow(x,poly[i].exponent)*poly[i].coefficient;
			}
			cout<<"\n The evaluation is : _"<<sum;
		}
		polynomial addition(polynomial A,polynomial B)
		{
			int i=0;
			int j=0;
			int k=0;
			polynomial C;
			while (i<A.total_terms && j<B.total_terms)
			{
				if(A.poly[i].exponent==B.poly[i].exponent)
				{
					C.poly[k].coefficient=A.poly[i].coefficient + 									B.poly[j].coefficient;
					C.poly[k].exponent=A.poly[i].exponent;
					i++;j++;k++;
				}
				else if(A.poly[i].exponent>B.poly[j].exponent)
				{
					C.poly[k].exponent=A.poly[i].exponent;
					C.poly[k].coefficient=A.poly[i].coefficient;
					i++;k++;
				}
				else
				{
					C.poly[k].exponent=B.poly[i].exponent;
					C.poly[k].coefficient=B.poly[i].coefficient;
					j++;k++;
				}
			}
			while (i<A.total_terms)
			{
				C.poly[k].exponent=A.poly[i].exponent;
				C.poly[k].coefficient=A.poly[i].coefficient;
				i++;k++;
			}
			while (i<B.total_terms)
			{
				C.poly[k].exponent=B.poly[j].exponent;
				C.poly[k].coefficient=B.poly[j].coefficient;
				j++;k++;
			}
			C.total_terms=k+1;
			C.showPoly();
		}
	
	};
void polynomial ::readPoly()
		{
			int i;
			cout<<"\n Enter the total number of terms:_";
			cin>>total_terms;
			for(i=0;i<total_terms;i++)
			{
				cout<<"\nEnter the exponent of "<<i+1<<"_term";
				cin>>poly[i].exponent;
					
				cout<<"\nEnter the coefficient of "<<i+1<<"_term";
				cin>>poly[i].coefficient;
			}
		}
int main()
{	
	
	polynomial p1,p2,p3;
	p1.readPoly();
	p1.showPoly();
	p1.evaluate();
	p2.readPoly();
	p2.showPoly();
	p3.addition(p1,p2);
	return 0;
}

			
