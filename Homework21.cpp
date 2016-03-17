#include<iostream>
using namespace std;

void exchange(int a[3][4]);
void multiply(int a[3][4]);

int main()
{
	int choice=0;
	while(choice!=2){
		int a[3][4]={{0,-1,1,2},{1,0,-2,-4},{2,-1,4,3}};
		cout<<"\nThis is the current matrix.\n"<<endl;
		for(int i=0;i<3;i++){
			for(int j=0;j<4;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
		cout<<"\nWhat would you like to do? Please choose by entering 1 or 2."<<endl;
		cout<<"|1. Exchange the first and second rows, then multiply each number in the first row by -2, add the product to the correspondent number in the last row, then use the sums to replace the last row.\n|2. Exit."<<endl;
		cin>>choice;
		switch(choice){
		case 1:{
			exchange(a);
			cout<<"\nThis is the matrix after the exchange.\n"<<endl;
			for(int i=0;i<3;i++){
				for(int j=0;j<4;j++)
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
			system("pause");
			cout<<endl;
			multiply(a);
			cout<<"This is the matrix after having the last row replaced with the the sum of the last row and the first row multiplied by -2.\n"<<endl;
			for(int i=0;i<3;i++){
				for(int j=0;j<4;j++)
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
			system("pause");
			break;
			   }
		case 2:{
			cout<<"\nThank you for your patronage. Goodbye!"<<endl;
			system("pause");
			break;
			   }
		default:{
			cout<<"\nInvalid Input.\n"<<endl;
			break;
				}	
	return 0;
		}
	}
}
void exchange(int a[3][4])
{
	int hold;
	for(int i=0;i<4;i++){
		hold=a[0][i];
		a[0][i]=a[1][i];
		a[1][i]=hold;
	}
}

void multiply(int a[3][4])
{
	for(int i=0;i<4;i++){
		a[2][i]+=(a[0][i]*-2);
	}
}