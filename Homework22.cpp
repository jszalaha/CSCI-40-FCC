#include<iostream>
#include<iomanip>
#include<ctype.h>
using namespace std;

void onewordperline(char cstring[100]);
void sentencebackwards(char cstring[100]);
int numberofwords(char cstring[100]);
void sentenceconversion(char cstring[100]);

int main()
{
	int metachoice=0;
	while(metachoice!=3){
	cout<<"What would you like to do? Enter 1, 2, or 3."<<endl;
	cout<<"|1. Run Sales Table Program\n|2. Run C-String Program\n|3. Exit"<<endl;
	cin>>metachoice;
	switch(metachoice){

	case 1:{

	char choice='y';	
	int sales[5][6]={0};
	while(choice!='n'&&choice!='N'){
	cout<<"\nEnter data from a sale slip of last month?(Y/N)"<<endl;
	cin>>choice;
	if(choice=='y'||choice=='Y'){	
	int sp=0, p=0, s=0;	
	cout<<"Sales person # (1-4): ";
	cin>>sp;
	cout<<"Product # (1-5): ";
	cin>>p;
	cout<<"Sales: ";
	cin>>s;
	sales[sp-1][p-1]=s;
	for(int i=0;i<4;i++)
		sales[4][i]=sales[0][i]+sales[1][i]+sales[2][i]+sales[3][i];
	for(int i=0;i<5;i++)
		sales[i][5]=sales[i][0]+sales[i][1]+sales[i][2]+sales[i][3]+sales[i][4];
	}
	if(choice=='n'||choice=='N'){
		cout<<"Sales Person: ";
		cout<<setw(5)<<left<<"1"<<setw(5)<<left<<"2"<<setw(5)<<left<<"3"<<setw(5)<<left<<"4"<<setw(5)<<left<<"Sub Total"<<endl;
		cout<<"Product: "<<"1"<<setw(4)<<right<<"";
		for(int i=0;i<6;i++){
			for(int j=0;j<5;j++)
				cout<<setw(5)<<left<<sales[j][i];
			if(i==0)
				cout<<endl<<setw(10)<<right<<2<<setw(4)<<left<<"";
			if(i==1)
				cout<<endl<<setw(10)<<right<<3<<setw(4)<<left<<"";
			if(i==2)
				cout<<endl<<setw(10)<<right<<4<<setw(4)<<left<<"";
			if(i==3)
				cout<<endl<<setw(10)<<right<<5<<setw(4)<<left<<"";
			if(i==4)
				cout<<endl<<"Sub Total"<<setw(5)<<right<<" ";
		}
		cout<<endl;
		system("pause");
	}
	if(choice!='y'&&choice!='Y'&&choice!='n'&&choice!='N')
		cout<<"\nInvalid Input. Please enter either Y for yes or N for no."<<endl;
	}
	break;
		   }

	case 2:{
		int subchoice=0;		
		while(subchoice!=5){
		char a[100], dummy;
		cout<<"\nWhat would you like to do within this C-String Program? Enter 1, 2, 3, 4, or 5."<<endl;
		cout<<"|1. Display a sentence one word per line.\n|2. Display a sentence backwards.\n|3. Count the number of words in a sentence.\n|4. Convert all lower case to upper and eliminate spaces.\n|5. Main Menu"<<endl;
		cin>>subchoice;
		switch(subchoice){
		case 1:{
			cout<<"\nPlease type something under 100 characters."<<endl;
			dummy=cin.get();
			cin.getline(a,100);
			onewordperline(a);
			break;
			   }
		case 2:{
			cout<<"\nPlease type something under 100 characters."<<endl;
			dummy=cin.get();
			cin.getline(a,100);
			sentencebackwards(a);
			break;
			   }
		case 3:{
			cout<<"\nPlease type something under 100 characters."<<endl;
			dummy=cin.get();
			cin.getline(a,100);
			cout<<"\nYou typed "<<numberofwords(a)<<" words."<<endl;
			break;
			   }
		case 4:{
			cout<<"\nPlease type something under 100 characters."<<endl;
			dummy=cin.get();
			cin.getline(a,100);
			sentenceconversion(a);
			cout<<endl;
			break;
			   }
		case 5:{
			break;
			   }
		default:
			cout<<"Invalid Input. Please enter 1, 2, 3, 4, or 5."<<endl;
			break;
		}
		}
		break;
		   }
	case 3:{
		cout<<"\nThank you for your patronage. Goodbye."<<endl;
		system("pause");
		break;
		   }
	default:{
		cout<<"\nInvalid Input. Please enter 1, 2, or 3."<<endl;
		break;
			}
		   }		   
	}
	return 0;
}

void onewordperline(char cstring[100])
{
	int i=0;
	while(cstring[i]!='\0'){
		if(cstring[i]==' '){
			cstring[i]='\n';
		}
		i++;
		}
	int k=0;
	cout<<endl;
	while(cstring[k]!='\0'){
		cout<<cstring[k];
		k++;
	}
}

void sentencebackwards(char cstring[100])
{
	cout<<endl;
	int k=0;
	while(cstring[k]!='\0')
		k++;
	for(int i=k-1;i>=0;i--)
		cout<<cstring[i];
	cout<<endl;
}

int numberofwords(char cstring[100])
{
	int i=0, counter=1;
	while(cstring[i]!='\0'){
		if(cstring[i]==' ')
			counter++;
		i++;
	}
	return counter;
}

void sentenceconversion(char cstring[100])
{
	for(int i=0;cstring[i]!='\0';i++){
		if(cstring[i]==' ')
			for(int k=i;cstring[k]!='\0';k++)
				cstring[k]=cstring[k+1];		
	}
	for(int i=0;cstring[i]!='\0';i++)
			cstring[i]=toupper(cstring[i]);
	cout<<endl;
	int j=0;
	while(cstring[j]!='\0'){
		cout<<cstring[j];
		j++;
	}
}


