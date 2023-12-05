#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Compound Interest Calculator
//-----------------------------
//						(n*t)
//formula A = P(1+r/n)**
//-----------------------------
//where P = amount,  r = interest rate, n = compound annually, t = year

int main(){
	double compoundInterest; // A
	double amount,interestRate,compoundAnnually; // P,r,n
	int years; // t
	int counter = 1;
	double bracket; // to solve bracket
	
	cout<<"***Compound Interest Calculator***\n";
	
	cout<<"Enter Amount: ";
	cin>>amount;
	
	cout<<"Enter Interest Rate: ";
	cin>>interestRate;
	interestRate = interestRate / 100;
	
	cout<<"Enter Compound Annually: ";
	cin>>compoundAnnually;
	
	cout<<"Enter years: ";
	cin>>years;
	
	// solving bracket (1+r/n)
	bracket = 1 + (interestRate/compoundAnnually);
	
	cout<<setw(15)<<left<<"Year";
	cout<<setw(2)<<left<<" ";
	cout<<setw(15)<<left<<"Compound Interest"<<endl;	
	
	while(counter <= years){
	
		double power = (compoundAnnually*counter);
	
			
		double bracketAndPower = pow(bracket,power);
		
		compoundInterest = amount * bracketAndPower;
		

		
		cout<<setw(15)<<left<<counter;
		cout<<setw(2)<<left<<" ";
		cout<<setw(15)<<left<<compoundInterest<<endl;
		          
		counter++;
	}
	 
	return 0;                                             
}
		          
  

  
		          
  