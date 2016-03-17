#include<iostream>
using namespace std;

struct info
{
	char lastName[80];
	char firstName[80];
	char ID[20];
	int score;
};

void searchEngine(info a[], int length, char[]);

int main()
{
	info student[5];

	int choice=0;
	while(choice!=3){
	cout<<"\nWhat would you like to do? Choose by entering 1, 2, or 3."<<endl;
	cout<<"|1. Enter Information about a Student (Up to 5 Students)\n|2. Search for a student in the database.\n|3. Exit"<<endl;
	cin>>choice;

	switch(choice){

	case 1:{
		for(int k=0;k<5;k++){
					cout<<"Please enter the student's last name: (-1 to exit)"<<endl;
					cin.getline(student[k].lastName,80);
					if(student[k].lastName=='-1')
						break;
					cout<<"Please enter the student's first name: "<<endl;
					cin.getline(student[k].firstName,80);
					cout<<"Please enter the student's ID: "<<endl;
					cin.getline(student[k].ID,20);
					cout<<"Please enter the student's score: "<<endl;
					cin>>student[k].score;
				}
		break;
			}

	case 2:{
		char searchID[20];
		cout<<"Please enter the student's ID: ";
		cin.getline(searchID,20);
		searchEngine(student,5,searchID);
		system("pause");
		break;
		   }

	case 3:{
		cout<<"Thank you for running this program. Goodbye."<<endl;
		system("pause");
		break;
		   }

	default:{
		cout<<"Invalid Input. Please enter either 1, 2, or 3."<<endl;
		break;
			}
		   }
	}

	return 0;
}

void searchEngine(info a[], int length, char b[])
{
	int count=0;
	for(int i=0;i<length;i++){
		if(b==a[i].ID){
			cout<<a[i].lastName<<", "<<a[i].firstName<<endl;
			cout<<"ID: "<<a[i].ID<<endl;
			cout<<"Score: "<<a[i].score<<endl;
			count++;
			break;
		}
	}
	if(count==0)
		cout<<"Student not found! Please try again."<<endl;
}