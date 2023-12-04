#include <iostream>
using namespace std;

// using if statements, relational operators, and equality operators

int main(){
	
	int num1,num2;
	
	cout<<"Enter two integers, and I will tell you\nthe relationships they satisfy:\n";
	
	cout<<"Enter num1: ";
	cin>>num1;
	
	cout<<"Enter number: ";
	cin>>num2;
	
	if(num1 == num2){
		cout<<num1<<" is equal to "<<num2<<"\n";
	}
	if(num1 != num2){
		cout<<num1<<" is not equal to "<<num2<<"\n";
	}
	if(num1 < num2){
		cout<<num1<<" is less than "<<num2<<"\n";
	}
	if(num1 > num2){
		cout<<num1<<" is greater than "<<num2<<"\n";
	}
	if(num1 <= num2){
		cout<<num1<<" is less than or equal to "<<num2<<"\n";
	}
	if(num1 >= num2){
		cout<<num1<<" is greater than or equal to "<<num2<<"\n";
	}
	
	return 0;

}