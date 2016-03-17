//Jordan Zalaha
//Programming Test 3
//18 April 2012
#include<iostream>
using namespace std;

void shiftReplace(int a[], int length, int b);
void digitArray(int a[], int length, int b);
int charFreq(char a[], char b);

int main()
{
	int choice=0;
	cout<<"Run test? 1=yes 0=no"<<endl;
	cin>>choice;
	if(choice==1){
	
	cout<<"The array is as follows: 4, 6, -1, 7, 0, 2, 5"<<endl;
	int arrayA[7]={4,6,-1,7,0,2,5};
	cout<<"The array after running the shiftReplace function is as follows: ";
	shiftReplace(arrayA, 7, 3);
	system("pause");

	cout<<"The number is as follows: 3216549871"<<endl;
	int arrayB[10];
	cout<<"The number's digits sorted into an array is displayed as: ";
	digitArray(arrayB, 10, 3216549871);
	system("pause");
	
	char b='a';
	cout<<"The sentence is: I am a student."<<endl;
	char arrayC[16]="I am a student.";
	cout<<"The number of letter a's occuring in the sentence is "<<charFreq(arrayC, b)<<endl;
	}

	else
		cout<<"Thank you. Goodbye."<<endl;
	system("pause");

	return 0;
}

void shiftReplace(int a[], int length, int b)
{
	for(int k=length-1;k>0;k--){
		a[k]=a[k-1];
	}
	a[0]=b;

	for(int i=0;i<length;i++)
		cout<<a[i]<<", ";
}

void digitArray(int a[], int length, int b)
{
	for(int k=length-1;k>=0;k--){
		a[k]=b%10;
		b=b/10;
		cout<<a[k]<<", ";
	}
}

int charFreq(char a[], char b)
{
	int k=0, counter=0;
	while(a[k]!='\0'){
		if(a[k]==b)
			counter++;
		k++;
	}
	return counter;
}
