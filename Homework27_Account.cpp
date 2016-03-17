#include<iostream>
#include<string>
using namespace std;

class Account
{
public:
	Account(float amount);
	void debt(float eb);
	void credit(float flow);
	void setBalance(float amount);
	float getBalance();
	void showAccountInfo();

private:
	float balance;
};

int main()
{
	float withdraw,deposit;
	Account myAccount(100.00);

	cout<<"Enter the amount you would like to withdraw:"<<endl;
	cin>>withdraw;
	myAccount.debt(withdraw);
	cout<<"Your balance now is "<<endl;
	myAccount.showAccountInfo();
	cout<<endl;
	cout<<"Enter the amount you would like to deposit:"<<endl;
	cin>>deposit;
	myAccount.credit(deposit);
	cout<<"Your balance now is "<<endl;
	myAccount.showAccountInfo();
	cout<<endl;
	system("pause");

	return 0;
}

Account::Account(float amount)
{
	if(amount<=0)
	{
		setBalance(0);
		cout<<"Invalid Initial Balance. Account balance set to 0."<<endl;
	}
	else
		setBalance(amount);
}

void Account::setBalance(float amount)
{
	balance=amount;
}

float Account::getBalance()
{
	return balance;
}

void Account::credit(float flow)
{
	balance+=flow;
}

void Account::debt(float eb)
{
	if(eb>balance)
	{
		cout<<"Debt amount exceeded account balance. Withdrawal aborted."<<endl;
	}
	else 
		balance-=eb;
}

void Account::showAccountInfo()
{
	cout<<"Account Balance: "<<getBalance()<<endl;
}

