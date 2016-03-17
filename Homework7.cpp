#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int choice;
	cout.setf(ios::fixed);
	cout.precision(2);

	cout<<"What would you like to do? Make your selection by entering 1, 2, 3, or 4."<<endl;
	cout<<"+------------------------------------------------------------"<<endl;
	cout<<"| 1. Use Payroll Program\n| 2. Take a Quiz\n| 3. Find Your Letter Grade\n| 4. Nothing"<<endl;
	cout<<"+------------------------------------------------------------"<<endl;
	cin>>choice;

	switch(choice){
	case 1:
		double salary, salary2, raise;

		cout<<"\nThis is a payroll program designed to determine your raise and new salary.\nPlease enter your current salary."<<endl;
		cin>>salary;

		if(salary>0 && salary<=9500){
			raise=salary*.152;
		}

		if(salary>9500 && salary<=12752){
			raise=salary*.176;
		}

		if(salary>12752 && salary<=500000){
			raise=salary*.219;
		}

		if(salary<0 || salary>500000){
			cout<<"\nInvalid Input. Program Terminated."<<endl;
			system("pause");
			return 0;
		}

		salary2=salary+raise;
		cout<<"\nCurrent Salary: "<<salary<<"\nRaise: "<<raise<<"\nNew Salary: "<<salary2<<endl;
		system("pause");
		break;

	case 2:
		char answer;

		cout<<setw(20)<<right<<"\nPOP QUIZ!"<<endl;
		cout<<"\nChoose the answer that lists the following California cities in descending order by their population. Choose your answer by entering A, B, C, or D."<<endl;
		cout<<"\nFresno, San Jose, Los Angeles, San Francisco, San Diego."<<endl;
		cout<<"\n\n| A. San Francisco, Los Angeles, San Diego, San Jose, Fresno.\n\n| B. Fresno, Los Angeles, San Francisco, San Diego, San Jose.\n\n| C. Los Angeles, San Diego, San Jose, San Francisco, Fresno.\n\n| D. Los Angeles, San Francisco, San Diego, San Jose, Fresno."<<endl;
		cin>>answer;

		switch(answer){
		case 'C':
			cout<<"\nExcellent! That is the correct answer!"<<endl;
			break;
			system("pause");

		case 'c':
			cout<<"\nExcellent! That is the correct answer!"<<endl;
			break;
			system("pause");

		default:
			cout<<"\nSorry, that is the wrong answer. The correct answer was C."<<endl;
			break;
			system("pause");
		}
		system("pause");
		break;
		
	case 3:
		double score;

		cout<<"\nPlease enter your test score as a percentage."<<endl;
		cin>>score;

		if(score>=90){
			cout<<"\nGreat job! You got an A!"<<endl;
			system("pause");
		}

		if(score>=80 && score<90){
			cout<<"\nYou got a B!"<<endl;
			system("pause");
		}

		if(score>=70 && score<80){
			cout<<"\nNot bad. You got a C."<<endl;
			system("pause");
		}

		if(score>=60 && score<70){
			cout<<"\nYou got a D. Try harder."<<endl;
			system("pause");
		}

		if(score>=50 && score<60){
			cout<<"\nYou got an F. :("<<endl;
			system("pause");
		}

		if(score<50){
			cout<<"\nYou got an F. :("<<endl;
			system("pause");
		}

		if(score<0){
			cout<<"\nInvalid Test Score!"<<endl;
			system("pause");
		}
		break;

	default:
		cout<<"\nProgram Terminated."<<endl;
		system("pause");
		break;
	}

	return 0;
	}