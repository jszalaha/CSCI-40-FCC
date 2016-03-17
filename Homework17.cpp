#include<iostream>
#include<cmath>
using namespace std;

double rootQuadraticfunction(double a, double b, double c);
int gcf(int a, int b, int c);
void rightTriangle(int  base);

int main()
{
	int choice=0;
	while(choice!=4){
		cout<<"\nPlease choose an action to take by entering 1, 2, 3, or 4."<<endl;
		cout<<"+------------------------ENCOM---------------------------+"<<endl;
		cout<<"|1. Calculate the root of a quadratic equation.\n|2. Calculate the Greatest Common Factor (GCF) of three integers.\n|3. Create a right triangle out of asterisks.\n|4. Exit Program."<<endl;
		cout<<"+--------------------------------------------------------+"<<endl;
		cin>>choice;
		switch(choice){
		//quadroots
		case 1:
			{
				double d, e, f;
				cout<<"Please set your quadratic equation equal to zero and enter\nthe values for a, b, and c (ax^2 + bx + c)."<<endl;
				cout<<"a=";
				cin>>d;
				cout<<"b=";
				cin>>e;
				cout<<"c=";
				cin>>f;
				double y=rootQuadraticfunction(d, e, f);
				if(y==-1){
					cout<<"Sorry, that equation produces an irrational discriminant\nand therefor has no roots."<<endl;
				}//End if
				else{
					cout<<"The root of the equation "<<d<<"x^2 + "<<e<<"x + "<<f<<" is "<<y<<"."<<endl;
					system("pause");
				}//End else
				break;
			}//End Case 1
		//GCF
		case 2:
			{
				int d, e, f;
				cout<<"Please enter three integers: "<<endl;
				cin>>d>>e>>f;
				int y=gcf(d, e, f);
				cout<<"The greatest common factor of "<<d<<", "<<e<<", and "<<f<<" is "<<y<<"."<<endl;
				system("pause");
				break;
			}//End case 2
		//rightTriangle
		case 3:
			{	
				int length;
				cout<<"Please enter the length of the base: ";
				cin>>length;
				rightTriangle(length);
				break;
			}//End case 3
		//exit program
		case 4:
			{
				cout<<"Thank you for choosing ENCOM. End of line."<<endl;
				system("pause");
				break;
			}//end case 4
		//default
		default:
			{
				cout<<"Invalid Input. Please enter either 1, 2, 3, or 4."<<endl;
				system("pause");
				break;
			}//end default
		}//End Switch
	}//End While
	return 0;
}//End Main

double rootQuadraticfunction(double a, double b, double c)
{	
	double x, disc=(pow(b,2))-(4*a*c);
	if(disc<0){
		x=-1;
	}//End if
	else{
		x=((-b)+sqrt(disc))/(2*a);
		if(x<0)
			x=x/-1;
	}//End else
	return x;
}//End rootQuadraticfunction

int gcf(int a, int b, int c)
{
	int gcf, temp;
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}//end if
	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}//end if
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}//end if
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0 && c%i==0)
			gcf=i;
	}//End for
	return gcf;
}//End gcf

void rightTriangle(int base)
{
	for(int k=base;k>=1;k--){
		for(int h=1;h<=k;h++)
			cout<<"* ";
		cout<<endl;
	}//end for
	system("pause");
}//end rightTriangle