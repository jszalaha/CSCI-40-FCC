#include<iostream>
using namespace std;

int main()
{
		double radius=0;
		double height=0;
		cout<<"Please enter the radius: "<<endl;
		cin>>radius;
		cout<<"Please enter the height: "<<endl;
		cin>>height;
		cout<<"The volume of the cylinder is: "<<radius*radius*3.1415926535*height<<endl;
		system("pause");

		double base=0;
		double height2=0;
		cout<<"Please enter the base: "<<endl;
		cin>>base;
		cout<<"Please enter the height: "<<endl;
		cin>>height2;
		cout<<"The area of the triangle is: "<<base*height*0.5<<endl;
		system("pause");

		double tempc=0;
		cout<<"Please enter the temperature in Celsius: "<<endl;
		cin>>tempc;
		cout<<"The temperature in Fahrenheit is: "<<(9/5*tempc)+32<<endl;
		system("pause");

		double x=0;
		cout<<"Please enter the number of items: "<<endl;
		cin>>x;
		cout<<"The cost according to the number of items manufactured is: "<<215000+(15*x)+(8*x*x)<<endl;
		system("pause");

		return 0;
}

