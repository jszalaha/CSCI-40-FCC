//Homework 5
//Jordan Zalaha
//February 1, 2012
#include<iostream>
using namespace std;

int main()
{
	int choice;
	cout.setf(ios::fixed);
	cout.precision(2);

	cout<<"What would you like to do?"<<endl;
	cout<<"Make your selection by entering 1, 2, or 3."<<endl;
	cout<<"+-----------------------------------+"<<endl;
	cout<<"|1. Calculate Stats of Test Scores"<<endl;
	cout<<"|2. Use Payroll Program"<< endl;
	cout<<"|3. Nothing"<<endl;
	cout<<"+-----------------------------------+"<<endl;
	cin>>choice;

	if(choice==1){

	int a,b,c,d,e,high,low;
	double avg;
	
	cout<<"Please enter 5 test scores as integers: "<<endl;
	cin>>a>>b>>c>>d>>e;

	avg=static_cast<double>(a+b+c+d+e)/5;
	high=a;
		if(b>high){
			high=b;
		}
		if(c>high){
			high=c;
		}
		if(d>high){
			high=d; 
		}
		if(e>high){
			high=e;
		}

	low=a;
		if(b<low){
			low=b;
		}
		if(c<low){
			low=c;
		}
		if(d<low){
			low=c; 
		}
		if(e<low){
			low=e;
		}

	cout<<"The highest score value entered is "<<high<<".\n"<<"The lowest score value entered is "<<low<<".\n"<<"The average score value is "<<avg<<"."<<endl;
	system("pause");
	}

	if(choice==2){

	double salary, raise, salary2;

	cout<<"This is a payroll program designed to calculate the raise on a salary."<<endl;
	cout<<"Please enter your salary: "<<endl;
	cin>>salary;

	if(salary>=0){

	if(salary>=12500){
		raise=salary*.152;
		salary2=salary+raise;
		
		cout<<"Current Salary: "<<salary<<"\n"<<"Raise: "<<raise<<"\n"<<"New Salary: "<<salary2<<endl;
		system("pause");
	}

	else{
		raise=salary*.219;
		salary2=salary+raise;

		cout<<"Current Salary: "<<salary<<"\n"<<"Raise: "<<raise<<"\n"<<"New Salary: "<<salary2<<endl;
		system("puase");
	}
	}

	else{
		cout<<"Wait... you're paying to work there? \n\n Does not compute"<<endl;
		system("puase");
	}
	}

	if(choice==3){
		cout<<"Program terminated."<<endl;
		system("pause");
	}
}