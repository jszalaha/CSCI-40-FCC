#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int choice=0;
	while(choice!=3){
	cout<<"Please select an action to take by entering 1, 2, or 3."<<endl;
	cout<<"+-----------------------------------------+"<<endl;
	cout<<"|1. Create a box of asterisks.\n|2. Create a pyramid of asterisks.\n|3. End Program."<<endl;
	cout<<"+-----------------------------------------+"<<endl;
	cin>>choice;

	switch(choice){
	case 1:
	int a, b;
	cout<<"Please enter the height of the rectangle."<<endl;
	cin>>a;
	cout<<"\nPlease enter the length of the rectangle."<<endl;
	cin>>b;
	cout<<endl;
	for(int i=1;i<=a;i++){
		if(i==a||i==1){
			for(int j=1;j<=b;j++)
				cout<<"* ";
			cout<<endl;			
		}
		if(i>1 && i<a){
			cout<<"* ";
			for(int j=2;j<b;j++)
				cout<<"  ";
			cout<<"* ";
			cout<<endl;
		}
	}
	system("pause");
	break;

	case 2:
	int base;
	cout<<"Please enter the length of the base."<<endl;
	cin>>base;
	cout<<endl;
	for(int k=base;k>=1;k--){
		for(int h=1;h<=k;h++)
			cout<<"* ";
		cout<<endl;
	}
	system("pause");
	break;

	case 3:
		cout<<"\nProgram terminated."<<endl;
		system("pause");
		break;

	default:
		cout<<"\nInvalid Input. You must enter 1, 2, or 3."<<endl;
	}
	}
	return 0;
}
