#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	
	double t=0;
	double P=0;
	int m=12;
	double r=0.0;
	r=r/100;

	cout<<"Enter yearly interest rate: ";
	cin>>r;
	cout<<"Enter number of the years that you would like to pay off the loan: ";
	cin>>t;
	cout<<"Enter loan amount: ";
	cin>>P;

	double R1=pow(1+(r/m),(-m*t));
	double R=P/((1-R1)/(r/m));
	double TP=R*12*t;
	double TI=TP-P;

	cout<<"The monthly payment is: "<<R<<endl;
	cout<<"The total payment is: "<<TP<<endl;
	cout<<"The interest paid is: "<<TI<<endl;
	system("pause");

	return 0;
}
 

