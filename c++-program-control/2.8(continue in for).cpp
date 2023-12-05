#include <iostream>
using namespace std;

// Using the continue statement in a for statement
int main(){
	
	int x;
	
	for(x = 1; x <= 10; x++){
		if(x == 5){
			continue;
		}
		cout << x;
	}
	cout<<"\nUsed continue to skip printing the value  5";
	return 0;
}