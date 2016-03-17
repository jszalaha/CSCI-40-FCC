#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, max;

	cout<<"Please enter 5 integers: "<<endl;
		cin>>a>>b>>c>>d>>e;
		max=a;

	if(b>max){
		max=b;
	}

	if(c>max){
		max=c;
	}

	if(d>max){
		max=d;
	}

	if(e>max){
		max=e;
	}
	
	cout<<"The largest value you entered is "<<max<<"."<<endl;
	system("pause");	

	int x, y, hold;

	cout<<"Please enter 2 integers: "<<endl;
	cin>>x>>y;

	if(x<=y){
		cout<<"You entered "<<x<<" and "<<y<<"."<<endl;
	}

	if(x>y){
		hold=x;
		x=y;
		y=hold;
		cout<<"You entered "<<x<<" and "<<y<<", right?"<<endl;
	}
	system("pause");

	return 0;
}