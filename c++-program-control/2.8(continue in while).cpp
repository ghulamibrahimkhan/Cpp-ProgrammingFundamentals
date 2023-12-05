#include <iostream>
using namespace std;

// Using the continue statement in a while statement
int main(){
	
	int x = 0;
	
	while(x <= 10){
		
		
		if(x == 5){	
			x++;
			continue;
		}
		cout << x;
		x++;
	}
	cout<<"\nUsed continue to skip printing the value  5";
	return 0;
}