#include<iostream>
#include<cmath>
using namespace std;

int pow_1_5(int n);
double sumSequence(int n);
int factorial(int n);

int main()
{
	cout<<pow_1_5(4)<<endl;
	cout<<sumSequence(6);
	cout<<endl;
	cout<<factorial(5);
	cout<<endl;
	system("pause");
	return 0;
}

int pow_1_5(int n)
{
	double value;
	value=pow(1.5,n);
	return value;
}

double sumSequence(int n)
{
	double value;
	if(n==1)
		value=1;
	else{
		value=sumSequence(n-1)+1/n;
	}
	return value;
}

int factorial(int n)
{
	int value;
	if(n==1)
		value=1;
	else{
		value=n*factorial(n-1);
	}
	return value;
}