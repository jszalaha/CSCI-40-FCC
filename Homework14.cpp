#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double n, s=0;
	cout<<"1) Please enter a positive integer for n."<<endl;
	cin>>n;
	for(double k=0; k<=n; k++)
		s+=pow(k,2)/pow(n,3);
	cout<<"The summation of the algorithm when n="<<n<<" is "<<s<<"."<<endl;
	system("pause");

	double m, s2=0;
	cout<<"\n2) Please enter a positive integer for n."<<endl;
	cin>>m;
	for(double j=0; j<=m; j++)
		s2+=(pow(((8*j)/m),2)+1)*(8/m);
	cout<<"The summation of the algorithm when n="<<m<<" is "<<s2<<"."<<endl;
	system("pause");

	double l;
	cout<<"\n3) Please enter a positive integer for n."<<endl;
	cin>>l;
	cout<<"The values of the equation when n="<<l<<" are: "<<endl;
	for(double h=1; h<=l; h++)
		cout<<pow((1+(1/h)),h)<<endl;
	system("pause");

	return 0;
}
