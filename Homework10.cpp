#include<iostream>
using namespace std;

int main()
{
	cout<<"1) "<<endl;
	int sum, z=12;
	while(z<=111){
		sum=z*z;
		z+=2;
	}
	cout<<"Sum of all squares from 11 to 111 is "<<sum<<"."<<endl;
	cout<<"\n\n";

	cout<<"2) "<<endl;
	int a=10, k=0;
	while(a<=52){
		if(k%6==0){
		cout<<endl;
		}
		cout<<a*5<<" ";
		a++;
		k++;
	}
	cout<<endl;
	cout<<endl;

	cout<<"3) "<<endl;
	int b=50, count2=0;
	while(b>0){
		if(count2%10==0){
		cout<<endl;
	}
		cout<<b<<" ";
		b--;
		count2++;
	}
	cout<<endl;
	cout<<endl;

	cout<<"4) "<<endl;
	int score, min=150, max=0, numb;
	double sum2=0, tot;
	cout<<"How many scores do you want to enter?"<<endl;
	cin>>numb;
	tot=numb;
	if(numb<1){
		cout<<"Invalid Input"<<endl;
		system("pause");
		return 0;
	}
	cout<<"Please enter the scores: "<<endl;
	do{
		cin>>score;
		if(score<0 ||score>150){
			cout<<"Invalid Input"<<endl;
			system("pause");
			return 0;
		}
		sum2+=score;
		if(score>max){
			max=score;
		}
		if(score<min){
			min=score;
		}
		numb--;
	}while(numb>0);
	cout<<"The average score is "<<sum2/tot<<endl;
	cout<<"The minimum score is "<<min<<endl;
	cout<<"The maximum score is "<<max<<endl;
	system("pause");

	return 0;
}