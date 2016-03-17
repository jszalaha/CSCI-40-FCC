#include<iostream>
#include<limits>
using namespace std;

struct record
{
	char lastName[100];
	char ID[50];
	int score;
};

int main()
{
	int n, waitingListLength=0, choice=0;
	char dummy;
	cout<<"Please enter the maximum amount of students allowed on the waiting list: ";
	
	cin>>n;
	record *waitingList;
	waitingList=new record[n];
	
	while(choice!=4){
	cout<<"\n\nWhat would you like to do? Choose by entering 1, 2, 3, or 4."<<endl;
	cout<<"      ********************************************"<<endl;
	cout<<"      *1. Add a student to the waiting list      *"<<endl;
	cout<<"      *2. Remove a student from the waiting list *"<<endl;//Shift all elements to the left
	cout<<"      *3. Display the waiting list               *"<<endl;//Print all info
	cout<<"      *4. Do nothing.                            *"<<endl;
	cout<<"      ********************************************"<<endl;
	cin>>choice;

	switch(choice){

	case 1:{
		if(waitingListLength>=n){
			cout<<"\nThe waiting list is full! Please make room on the list before adding more students."<<endl;
			break;
		}
		else{
			
			cout<<"\nPlease enter the student's last name: ";
			dummy=cin.get();
			cin.getline(waitingList[waitingListLength].lastName,100);
			cout<<"Please enter the student's ID number: ";
			cin.getline(waitingList[waitingListLength].ID,50);
			cout<<"Please enter the student's current grade: ";
			cin>>waitingList[waitingListLength].score;
			waitingListLength++;
		}
		break;
		   }

	case 2:{
		for(int k=waitingListLength;k>0;k--){
			waitingList[k-1]=waitingList[k];
		}
		waitingListLength--;
		cout<<"\nThe first student on the waiting list has been removed."<<endl;
		break;
		   }

	case 3:{
		if(waitingListLength<=0){
			cout<<"The waiting list is empty. Please add students to the list."<<endl;
			break;
		}
		else{
			for(int i=0;i<waitingListLength;i++){
				cout<<"\nLast Name: "<<waitingList[i].lastName<<endl;
				cout<<"ID: "<<waitingList[i].ID<<endl;
				cout<<"Grade: "<<waitingList[i].score<<endl;
			}
		}
		break;
		   }

	case 4:{
		cout<<"\nThanks dude! Peace out!"<<endl;
		system("pause");
		break;
		   }

	default:{
		cout<<"\nInvalid Input. Please enter either 1, 2, 3, or 4."<<endl;
		break;
			}

	}//End Switch
	}//End While

	return 0;
}