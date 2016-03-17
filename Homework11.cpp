#include<iostream>
using namespace std;

int main()
{
	cout<<"\n1) "<<endl;
	double gallons, miles, totalg=0, totalm=0;
	do{
		cout<<"\nEnter the gallons used (-1 to end): ";
		cin>>gallons;
		if(gallons!=-1){
		cout<<"\nEnter the miles driven: ";
		cin>>miles;
		cout<<"\nThe miles/gallon for this tank was "<<miles/gallons<<endl;
		totalg+=gallons;
		totalm+=miles;
		}
	}while(gallons!=-1);
	cout<<"\nThe overall average miles/gallon was "<<totalm/totalg<<endl;

	cout<<"\n2) "<<endl;
	int acc;
	double bbal, charge, cred, credlim, bal;
	do{
	cout<<"\nEnter account number (-1 to end): ";
	cin>>acc;
	if(acc!=-1){
	cout<<"Enter beginning balance: ";
	cin>>bbal;
	cout<<"Enter total charges: ";
	cin>>charge;
	cout<<"Enter total credit: ";
	cin>>cred;
	cout<<"Enter credit limit: ";
	cin>>credlim;
	bal=bbal+charge-cred;
	cout<<"Accout: "<<acc<<endl;
	cout<<"Credit limit: "<<credlim<<endl;
	cout<<"Balance: "<<bal<<endl;
		if(bal>credlim){
		cout<<"Credit Limit Exceeded."<<endl;
		}
	}
	}while(acc!=-1);
	cout<<"\nProgram Terminated."<<endl;

	system("pause");
	return 0;
}
