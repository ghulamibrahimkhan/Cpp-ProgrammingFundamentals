#include <iostream>
using namespace std;

// Summation with for

int main(){
	
	int sum;
	int number;
	
	for(number = 2; number <= 100; number += 2){
		sum += number;
	}
	
	cout<<sum;

	return 0;
}