#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;

int main()
{
	int a, b;
	srand(time(0));
	a=rand()%100;

	cout<<"Guess a number between 0 and 99."<<endl;
	cin>>b;
	
	if(b==a){
		cout<<"Great! You guessed right!"<<endl;
		system("pause");
		return 0;
	}

	else{
		if(b<a){
			cout<<"The number you entered was too small. Try one more time."<<endl;
			cin>>b;

			if(b==a){
				cout<<"Great! You guessed right!"<<endl;
				system("pause");
				return 0;
			}

			else{
				cout<<"Sorry, you are out of luck today."<<endl;
				system("pause");
				return 0;
			}
		}

		if(b>a){
			cout<<"The number you entered was too big. Try one more time."<<endl;
			cin>>b;

			if(b==a){
				cout<<"Great! You guessed right!"<<endl;
				system("pause");
				return 0;
			}

			else{
				cout<<"Sorry, you are out of luck today."<<endl;
				system("pause");
				return 0;
			}
		}
	}
}
