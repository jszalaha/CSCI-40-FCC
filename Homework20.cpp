#include<iostream>
using namespace std;

void SortDecending(int a[], int length);
void shiftRight(int b[], int length);

int main()
{
	int choice=0;
	while(choice!=3){
		cout<<"\nWhat would you like to do? Choose by entering 1, 2, or 3."<<endl;
		cout<<"|1. Sort 5 integers into descending order.\n|2. Shift 5 integers to the right one place.\n|3. Exit."<<endl;
		cin>>choice;
		switch(choice){
		case 1:{
			int a[5];
			cout<<"\nPlease enter 5 integers: "<<endl;
			for(int i=0;i<5;i++)
				cin>>a[i];
			SortDecending(a,5);
			cout<<"\nYou entered "<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<"."<<endl;
			break;
			}
		case 2:{
			int b[5];
			cout<<"\nPlease enter 5 integers: "<<endl;
			for(int i=0;i<5;i++)
				cin>>b[i];
			shiftRight(b,5);
			cout<<"\nYou entered "<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3]<<" "<<b[4]<<"."<<endl;
			break;
			   }
		case 3:{
			cout<<"Thank you for your patronage. Goodbye!"<<endl;
			break;
			   }
		default:{
			cout<<"Invalid Input."<<endl;
			break;
				}
		}
		system("pause");
	}
	return 0;
}


void SortDecending(int a[], int length)
{
	int t;
    for(int j=length;j>0;j--){
		for(int i=0;i<j;i++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
}

void shiftRight(int b[], int length)
{
	for(int i=length-1;i>0;i--)
		b[i]=b[i-1];
	b[0]=b[length];
}