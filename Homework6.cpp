#include<iostream>
using namespace std;

int main()
{
	int choice;
	cout.setf(ios::fixed);
	cout.precision(2);

	cout<<"What would you like to do?\nChoose by entering 1 or 2 or 3."<<endl;
	cout<<"+----------------------------------------------+"<<endl;
	cout<<"|1. Rearrange 6 integers into ascending order.\n|2. Answer questions about programing.\n|3. Nothing."<<endl;
	cout<<"+----------------------------------------------+"<<endl;
		
	cin>>choice;
	switch(choice){
	case 1:
	int a, b, c, d, e, f, temp;
    cout<<"Please enter 6 integers: "<<endl; 
    cin>>a>>b>>c>>d>>e>>f;

	if(a>b){
        temp=a;
        a=b;
        b=temp;
	}

	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}

	if(c>d){
		temp=c;
		c=d;
		d=temp;
	}

	if(d>e){
		temp=d;
		d=e;
		e=temp;
	}

	if(e>f){
		temp=e;
		e=f;
		f=temp;
	}

	if(a>b){
        temp=a;
        a=b;
        b=temp;
	}

	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}

	if(c>d){
		temp=c;
		c=d;
		d=temp;
	}

	if(d>e){
		temp=d;
		d=e;
		e=temp;
	}

	if(a>b){
        temp=a;
        a=b;
        b=temp;
	}

	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}

	if(c>d){
		temp=c;
		c=d;
		d=temp;
	}

	if(a>b){
        temp=a;
        a=b;
        b=temp;
	}

	if(b>c){
		temp=b;
		b=c;
		c=temp;
	}

	if(a>b){
        temp=a;
        a=b;
        b=temp;
	}

	cout<<"They are rearranged in ascending order as following: "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
	system("pause");
	break;
	
	case 2:
		int c1, c2, c3;
		cout<<"Answer the following questions by entering 1 for yes and 0 for no."<<endl;
		system("pause");
		cout<<"Have you ever done any programming before?"<<endl;
		cin>>c1;

		switch(c1){
		case 1:
			cout<<"Using C++ before?"<<endl;
			cin>>c2;
			switch(c2){
			case 1:
				cout<<"Go ahead and skip Chapter 1."<<endl;
				break;
			case 0:
				cout<<"Please do Assignment 1."<<endl;
				break;
			}
			break;
		case 0:
			cout<<"Have you ever used a computer before?"<<endl;
			cin>>c3;
			switch(c3){
			case 1:
				cout<<"Please read the appendix."<<endl;
				break;
			case 0:
				cout<<"I seems that this class is probably not for you. I would encourage you to drop."<<endl;
				break;
			}
			break;
		default:
			cout<<"Invalid input."<<endl;
			break;
		}
		system("pause");
		break;

	case 3:
		cout<<"Program Terminated."<<endl;
		system("pause");
		break;

	default:
		cout<<"Invalid Input. Program Terminated."<<endl;
		system("pause");
		break;	
}
return 0;
}