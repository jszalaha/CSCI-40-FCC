#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

int flip(void);
struct record
{
	int test1Score;
	int test2Score;
	char grade;
};

int main()
{
	char choice='y';
	while (choice!='n'||'N'){
	cout<<"Would you like to use the coin flip program? Y/N"<<endl;
	cin>>choice;

	switch(choice){

	case'Y':{

	int runs=0, headdist[12]={0};
	cout<<"\nHow many times would you like to flip the coin 12 times?"<<endl;
	cin>>runs;
	for(int i=1;i<=runs;i++){		
		int a=0;
		a=flip();
		headdist[a]++;
	}
	cout<<"\nHeads\n"<<endl;
	for(int k=0;k<=12;k++){
		cout<<k<<setw(5)<<left;
		if(headdist[k]>0){
			for(int j=1;j<=headdist[k];j++)
				cout<<"*";
			cout<<endl;
		}
		else{
			cout<<endl;
		}
	}
	system("pause");
	break;
				  }
	case'y':{

	int runs=0, headdist[12]={0};
	cout<<"\nHow many times would you like to flip the coin 12 times?"<<endl;
	cin>>runs;
	for(int i=1;i<=runs;i++){		
		int a=0;
		a=flip();
		headdist[a]++;
	}
	cout<<"\nHeads\n"<<endl;
	for(int k=0;k<=12;k++){
		cout<<k<<setw(5)<<left;
		if(headdist[k]>0){
			for(int j=1;j<=headdist[k];j++)
				cout<<"*";
			cout<<endl;
		}
		else{
			cout<<endl;
		}
	}
	system("pause");
	break;
				  }

	case'N':{

		char choice2='y';
		while(choice2!='n'||'N'){
		cout<<"Would you like to input scores into a structured memory array with 5 elements? Y/N"<<endl;
		cin>>choice2;
		switch(choice2){

		case'y':{

			double avg[5];
			record a[5];

			for(int i=0;i<5;i++){
			cout<<"\nPlease enter the first test score: ";
			cin>>a[i].test1Score;
			cout<<"\nPlease enter the second test score: ";
			cin>>a[i].test2Score;
			avg[i]=(a[i].test1Score+a[i].test2Score)/2;
			if(avg[i]<=100&&avg[i]>=90)
				a[i].grade='A';
			if(avg[i]<=89&&avg[i]>=80)
				a[i].grade='B';
			if(avg[i]<=79&&avg[i]>=70)
				a[i].grade='C';
			if(avg[i]<=69&&avg[i]>=60)
				a[i].grade='D';
			if(avg[i]<=59)
				a[i].grade='F';
			}

			double test1min=a[0].test1Score, test1max=a[0].test1Score, test2min=a[0].test2Score, test2max=a[0].test2Score, test1avg=0, test2avg=0;

			for(int k=0;k<5;k++)
				test1avg+=a[k].test1Score;
			test1avg=test1avg/5;
			for(int k=0;k<5;k++)
				test2avg+=a[k].test2Score;
			test2avg=test2avg/5;
			for(int k=0;k<4;k++){
				if(a[k+1].test1Score<a[k].test1Score)
					test1min=a[k+1].test1Score;
				else
					test1min=a[k].test1Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test2Score<a[k].test2Score)
					test2min=a[k+1].test2Score;
				else
					test2min=a[k].test2Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test1Score>a[k].test1Score)
					test1max=a[k+1].test1Score;
				else
					test1max=a[k].test1Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test2Score>a[k].test2Score)
					test2max=a[k+1].test2Score;
				else
					test2max=a[k].test2Score;
			}
			
			for(int k=0;k<3;k++){
				cout<<"Score 1: ";
				cout<<a[k].test1Score<<endl;
				cout<<"Score 2: ";
				cout<<a[k].test2Score<<endl;
				cout<<"Grade: ";
				cout<<a[k].grade<<endl;
			}

			cout<<"\nScore 1 Average: ";
			cout<<test1avg<<endl;
			cout<<"\nScore 1 Minimum: ";
			cout<<test1min<<endl;
			cout<<"\nScore 1 Maximum: ";
			cout<<test1max<<endl;
			cout<<"\nScore 2 Average: ";
			cout<<test2avg<<endl;
			cout<<"\nScore 2 Minimum: ";
			cout<<test2min<<endl;
			cout<<"\nScore 2 Maximum: ";
			cout<<test2max<<endl;
			break;
				}

		case'Y':{

			double avg[5];
			record a[5];

			for(int i=0;i<5;i++){
			cout<<"\nPlease enter the first test score: ";
			cin>>a[i].test1Score;
			cout<<"\nPlease enter the second test score: ";
			cin>>a[i].test2Score;
			avg[i]=(a[i].test2Score+a[i].test2Score)/2;
			if(avg[i]<=100&&avg[i]>=90)
				a[i].grade='A';
			if(avg[i]<=89&&avg[i]>=80)
				a[i].grade='B';
			if(avg[i]<=79&&avg[i]>=70)
				a[i].grade='C';
			if(avg[i]<=69&&avg[i]>=60)
				a[i].grade='D';
			if(avg[i]<=59)
				a[i].grade='F';
			}

			double test1min=a[0].test1Score, test1max=a[0].test1Score, test2min=a[0].test2Score, test2max=a[0].test2Score, test1avg, test2avg;

			for(int k=0;k<5;k++)
				test1avg+=a[k].test1Score;
			test1avg=test1avg/5;
			for(int k=0;k<5;k++)
				test2avg+=a[k].test2Score;
			test2avg=test2avg/5;
			for(int k=0;k<4;k++){
				if(a[k+1].test1Score<a[k].test1Score)
					test1min=a[k+1].test1Score;
				else
					test1min=a[k].test1Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test2Score<a[k].test2Score)
					test2min=a[k+1].test2Score;
				else
					test2min=a[k].test2Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test1Score>a[k].test1Score)
					test1max=a[k+1].test1Score;
				else
					test1max=a[k].test1Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test2Score>a[k].test2Score)
					test2max=a[k+1].test2Score;
				else
					test2max=a[k].test2Score;
			}
			
			for(int k=0;k<5;k++){
				cout<<"Score 1: ";
				cout<<a[k].test1Score<<endl;
				cout<<"Score 2: ";
				cout<<a[k].test2Score<<endl;
				cout<<"Grade: ";
				cout<<a[k].grade<<endl;
			}

			cout<<"\nScore 1 Average: ";
			cout<<test1avg<<endl;
			cout<<"\nScore 1 Minimum: ";
			cout<<test1min<<endl;
			cout<<"\nScore 1 Maximum: ";
			cout<<test1max<<endl;
			cout<<"\nScore 2 Average: ";
			cout<<test2avg<<endl;
			cout<<"\nScore 2 Minimum: ";
			cout<<test2min<<endl;
			cout<<"\nScore 2 Maximum: ";
			cout<<test2max<<endl;
			break;
				}
		
		case'n':{
			cout<<"\nThank you for running this program. Goodbye."<<endl;
			system("pause");
			break;
					   }
		case'N':{
			cout<<"\nThank you for running this program. Goodbye."<<endl;
			system("pause");
			break;
					   }

		default:{
			cout<<"\nInvalid Input. Please enter either Y for yes or N for no."<<endl;
			break;			
				}
		}//End Switch(Choice2)
		}//End While
		break;		
		}//End Case 'N'

	case 'n':{
		char choice2='y';
		while(choice2!='n'||'N'){
		cout<<"\nWould you like to input scores into a structured memory array? Y/N"<<endl;
		cin>>choice2;
		switch(choice2){

		case'y':{

			double avg[5];
			record a[5];

			for(int i=0;i<5;i++){
			cout<<"\nPlease enter the first test score: ";
			cin>>a[i].test1Score;
			cout<<"\nPlease enter the second test score: ";
			cin>>a[i].test2Score;
			avg[i]=(a[i].test2Score+a[i].test2Score)/2;
			if(avg[i]<=100&&avg[i]>=90)
				a[i].grade='A';
			if(avg[i]<=89&&avg[i]>=80)
				a[i].grade='B';
			if(avg[i]<=79&&avg[i]>=70)
				a[i].grade='C';
			if(avg[i]<=69&&avg[i]>=60)
				a[i].grade='D';
			if(avg[i]<=59)
				a[i].grade='F';
			}

			double test1min=a[0].test1Score, test1max=a[0].test1Score, test2min=a[0].test2Score, test2max=a[0].test2Score, test1avg, test2avg;

			for(int k=0;k<5;k++)
				test1avg+=a[k].test1Score;
			test1avg=test1avg/5;
			for(int k=0;k<5;k++)
				test2avg+=a[k].test2Score;
			test2avg=test2avg/5;
			for(int k=0;k<4;k++){
				if(a[k+1].test1Score<a[k].test1Score)
					test1min=a[k+1].test1Score;
				else
					test1min=a[k].test1Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test2Score<a[k].test2Score)
					test2min=a[k+1].test2Score;
				else
					test2min=a[k].test2Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test1Score>a[k].test1Score)
					test1max=a[k+1].test1Score;
				else
					test1max=a[k].test1Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test2Score>a[k].test2Score)
					test2max=a[k+1].test2Score;
				else
					test2max=a[k].test2Score;
			}
			
			for(int k=0;k<3;k++){
				cout<<"Score 1: ";
				cout<<a[k].test1Score<<endl;
				cout<<"Score 2: ";
				cout<<a[k].test2Score<<endl;
				cout<<"Grade: ";
				cout<<a[k].grade<<endl;
			}

			cout<<"\nScore 1 Average: ";
			cout<<test1avg<<endl;
			cout<<"\nScore 1 Minimum: ";
			cout<<test1min<<endl;
			cout<<"\nScore 1 Maximum: ";
			cout<<test1max<<endl;
			cout<<"\nScore 2 Average: ";
			cout<<test2avg<<endl;
			cout<<"\nScore 2 Minimum: ";
			cout<<test2min<<endl;
			cout<<"\nScore 2 Maximum: ";
			cout<<test2max<<endl;
			system("pause");
			break;
			}
		case'Y':{

			double avg[5];
			record a[5];

			for(int i=0;i<5;i++){
			cout<<"\nPlease enter the first test score: ";
			cin>>a[i].test1Score;
			cout<<"\nPlease enter the second test score: ";
			cin>>a[i].test2Score;
			avg[i]=(a[i].test2Score+a[i].test2Score)/2;
			if(avg[i]<=100&&avg[i]>=90)
				a[i].grade='A';
			if(avg[i]<=89&&avg[i]>=80)
				a[i].grade='B';
			if(avg[i]<=79&&avg[i]>=70)
				a[i].grade='C';
			if(avg[i]<=69&&avg[i]>=60)
				a[i].grade='D';
			if(avg[i]<=59)
				a[i].grade='F';
			}

			double test1min=a[0].test1Score, test1max=a[0].test1Score, test2min=a[0].test2Score, test2max=a[0].test2Score, test1avg, test2avg;

			for(int k=0;k<5;k++)
				test1avg+=a[k].test1Score;
			test1avg=test1avg/5;
			for(int k=0;k<5;k++)
				test2avg+=a[k].test2Score;
			test2avg=test2avg/5;
			for(int k=0;k<4;k++){
				if(a[k+1].test1Score<a[k].test1Score)
					test1min=a[k+1].test1Score;
				else
					test1min=a[k].test1Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test2Score<a[k].test2Score)
					test2min=a[k+1].test2Score;
				else
					test2min=a[k].test2Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test1Score>a[k].test1Score)
					test1max=a[k+1].test1Score;
				else
					test1max=a[k].test1Score;
			}
			for(int k=0;k<4;k++){
				if(a[k+1].test2Score>a[k].test2Score)
					test2max=a[k+1].test2Score;
				else
					test2max=a[k].test2Score;
			}
			
			for(int k=0;k<3;k++){
				cout<<"Score 1: ";
				cout<<a[k].test1Score<<endl;
				cout<<"Score 2: ";
				cout<<a[k].test2Score<<endl;
				cout<<"Grade: ";
				cout<<a[k].grade<<endl;
			}

			cout<<"\nScore 1 Average: ";
			cout<<test1avg<<endl;
			cout<<"\nScore 1 Minimum: ";
			cout<<test1min<<endl;
			cout<<"\nScore 1 Maximum: ";
			cout<<test1max<<endl;
			cout<<"\nScore 2 Average: ";
			cout<<test2avg<<endl;
			cout<<"\nScore 2 Minimum: ";
			cout<<test2min<<endl;
			cout<<"\nScore 2 Maximum: ";
			cout<<test2max<<endl;
			system("pause");
			break;
			}

		case'n':{
			cout<<"\nThank you for running this program. Goodbye."<<endl;
			system("pause");
			break;
					   }

		case'N':{
			cout<<"\nThank you for running this program. Goodbye."<<endl;
			system("pause");
			break;
					   }

		default:{
			cout<<"\nInvalid Input. Please enter either Y for yes or N for no."<<endl;
			break;			
				}				
		}		
		}//End While
			break;
		}//End case 'n'			 

	default:{

		cout<<"\nInvalid Input. Please enter Y for yes or N for no."<<endl;
		break;
			}
}//End Master Switch
}//End Master While
	return 0;
	}

int flip(void)
{
	srand(time(NULL));
	int heads=0;
	for(int i=0;i<12;i++){
		int a=rand()%2;
		if(a==1)
			heads++;
	}
	return heads;
}
