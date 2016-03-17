#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int largePrime(int a);
bool isPrime(int a);
void testscores(double a[12]);

int main()
{
	int choice=0;
	while(choice!=3){
	cout<<"\nPlease choose an action by entering 1, 2, or 3.\n                  ENCOM"<<endl;
	cout<<"|1. Determine whether an integer is prime.\n|2. Find the largest prime number less than or equal to an integer.\n|3. Calculate your new test scores from your old ones.\n|4. Exit."<<endl;
	cin>>choice;
	switch(choice){
	case 1:{
		int n;
		cout<<"\nPlease enter an integer: ";
		cin>>n;
		if(n==1 || n==2 || n==3){
			cout<<"\nThe number you entered is indeed prime!"<<endl;
			system("pause");
			break;
		}
		if(isPrime(n)==true){
			cout<<"\nThe number you entered is indeed prime!"<<endl;
			system("pause");
		}
		if(isPrime(n)==false){
			cout<<"\nThe number you entered is not a prime number."<<endl;
			system("pause");
		}
		break;
		   }
	case 2:{
		int m;
		cout<<"\nPlease enter an integer: ";
		cin>>m;
		if(isPrime(m)==true || m==1 || m==2 || m==3){
			cout<<"\nThe integer you entered is prime."<<endl;
			break;
		}
		else{
			cout<<"\nThe largest prime number less than or equal to the number you entered is "<<largePrime(m)<<"."<<endl;
			}
		break;
		   }
	case 3:{
		double a[12];
		cout<<"Please enter your 12 test scores: "<<endl;
		for(int i=0;i<12;i++)
			cin>>a[i];
		testscores(a);
		break;
		   }
	case 4:{		
		cout<<"\nThank you for choosing ENCOM. Goodbye!"<<endl;
		system("pause");
		break;
		   }
	default:
		cout<<"\nInvalid Input."<<endl;
		break;
	}
	}
	return 0;
}

bool isPrime(int a)
{
	int i;	
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			return false;
		}
	}	
	return true;
}

int largePrime(int a)
{
	int maxp;
	for(int k=4;k<=a;k++){
		for(int i=2;i<k;i++){
			if(k%i==0)
				break;
			maxp=k;
		}
	}
	return maxp;			
}

void testscores(double a[12])
{
	double b[12], max=a[0], avg=0;
	for(int i=0;i<30;i++){
		 if(a[i]>max)
			max=a[i];
	}
	for(int i=0;i<12;i++){
		b[i]=(a[i]/max)*100;
	}
	avg=(b[0]+b[1]+b[2]+b[3]+b[4]+b[5]+b[6]+b[7]+b[8]+b[9]+b[10]+b[11])/12;
	cout.setf(ios::fixed);
	cout.precision(0);
	cout<<"\nYour highest score was "<<max<<"."<<endl;
	cout<<"Difference between entered score and new score:\n";
	for(int i=0;i<12;i++){
		cout<<"Score "<<i<<": "<<a[i]-b[i]<<endl;
	}
	cout.precision(1);
	cout<<"\nThe average new score is "<<avg<<"."<<endl;
	system("pause");
}
