#include <iostream>
using namespace std;

int main(){
	
	int x;
	
	for (x = 1; x <= 10; x++){
		
		if(x == 5){
			cout<<"\nBroke out of loop at x == "<< x;
			break;
		}
		cout<<x;
	}
}