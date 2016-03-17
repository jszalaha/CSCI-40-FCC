#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int choice=0;
	while(choice!=3){
		cout<<"\nPlease choose an action to take by entering 1, 2, or 3."<<endl;
		cout<<"+------------------------ENCOM---------------------------+"<<endl;
		cout<<"|1. Caculate all prime numbers up to an entered number.\n|2. Calculate the Least Common Multiple (LCM) of an entered number.\n|3. Exit Program."<<endl;
		cout<<"+--------------------------------------------------------+"<<endl;
		cin>>choice;
		switch(choice){			

		case 1:
			{
			int a, k=0;
			cout<<"Please enter a positive integer: ";
			cin>>a;
			if(a<0){
				cout<<"Invalid Input."<<endl;
				system("pause");
			}
			if(a>3){
				cout<<"All primes up to "<<a<<" are 1 2 3 ";
				for(int i=4;i<=a;i++){
					k=0;
					for(int j=2;j<=i-1;j++){
					if(i%j==0){
						k=1;
						break;						
					}
					}
					if(k==0){
						cout<<i<<" ";
					}
				}
				cout<<"."<<endl;
				system("pause");
				}
			if(a==3){
				cout<<"All primes up to "<<a<<" are 1, 2, and 3."<<endl;
				system("pause");
			}
			if(a==2){
				cout<<"All primes up to "<<a<<" are 1, and 2."<<endl;
				system("pause");
			}
			if(a==1){
				cout<<"1 is a prime number."<<endl;
				system("pause");
			}
				break;
			}

		case 2:
			{
			int b, c, temp;
			cout<<"Please enter two positive integers: "<<endl;
			cin>>b>>c;
			if(c<b){
				temp=b;
				b=c;
				c=temp;
			}
			for(int h=c;h>0;h++){
				if(h%b==0 && h%c==0){
					cout<<"The LCM of "<<b<<" and "<<c<<" is "<<h<<"."<<endl;
					system("pause");
					break;
				}
			}
			break;
			}

		case 3:
			{
			cout<<"Thank you for choosing ENCOM. Goodbye!"<<endl;
			system("pause");
			break;
			}

		default:
			{
			cout<<"Invalid Input. Please enter either 1, 2, or 3."<<endl;
			cout<<endl;
			break;
			}
		}
	}
	return 0;
}