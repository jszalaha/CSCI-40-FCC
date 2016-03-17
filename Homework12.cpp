#include<iostream>
using namespace std;

int main()
{
	double dollars;
	int a=0, b=0, c=0;
	do{
	cout<<"\nPlease enter amount spent (-1 to end): ";
	cin>>dollars;
	if(dollars>=0 && dollars<=200){
		a++;
	}
	if(dollars>=200.01 && dollars<=800){
		b++;
	}
	if(dollars>=800.01){
		c++;
	}
	}while(dollars!=-1);
	cout<<"\nThere was/were "<<a<<" customer(s) that spent between $0.00 and $200.00.\nThere was/were "<<b<<" customer(s) that spent between $200.01 and $800.00.\nThere was/were "<<c<<" customer(s) that spent $800.01 or more."<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
