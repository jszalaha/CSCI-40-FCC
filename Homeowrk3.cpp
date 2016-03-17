#include<iostream>
using namespace std;

int main()
{
	int moneyincents, numberofdollars, numberofquarters, numberofdimes, numberofnickles, numberofpennies;
	double money;

	cout<<"Enter the amount of money you have: ";
	cin>>money;
	moneyincents=money*100;
	numberofdollars=moneyincents/100;
	moneyincents=moneyincents%100;
	numberofquarters=moneyincents/25;
	moneyincents=moneyincents%25;
	numberofdimes=moneyincents/10;
	moneyincents=moneyincents%10;
	numberofnickles=moneyincents/5;
	moneyincents=moneyincents%5;
	numberofpennies=moneyincents/1;
	cout<<"The number of dollars is: "<<numberofdollars<<endl;
	cout<<"The number of quarters is: "<<numberofquarters<<endl;
	cout<<"The number of dimes is: "<<numberofdimes<<endl;
	cout<<"The number of nickles is: "<<numberofnickles<<endl;
	cout<<"The number of pennies is: "<<numberofpennies<<endl;
	system("pause");

	return 0;
}