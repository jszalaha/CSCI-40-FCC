#include<iostream>
using namespace std;

void tossingCoin(int n);

int main()
{
	int n;
	cout<<"How many times do you want to flip this coin?\n";
	cin>>n;
	tossingCoin(n);
	return 0;
}

void tossingCoin(int n)
{
	int a=0, b=0, x;
	for(int k=1;k<=n/10;k++){
		for(int i=1;i<=10;i++){
		x=rand()%2;
		if(x==0){
			cout<<"H";
			a++;
		}
		if(x==1){
			cout<<"T";
			b++;
		}
		}
		cout<<endl;
	}
	for(int j=1;j<=n%10;j++){
		x=rand()%2;
		if(x==0){
			cout<<"H";
			a++;
		}
		if(x==1){
			cout<<"T";
			b++;
		}
	}
	cout<<endl;
	cout<<"Heads: "<<a<<" Tails: "<<b<<endl;
	system("pause");
}
