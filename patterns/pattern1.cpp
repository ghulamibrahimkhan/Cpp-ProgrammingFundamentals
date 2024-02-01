#include <iostream>
using namespace std;

int main(){
	int rows = 6;
	
	cout << "1" << endl;
	
	for(int i = 1; i<= rows; i++){
		for(int j = 1; j <= i; j++){
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	cout << "1.1" << endl;

	for(int i = 1; i<= rows; i++){
		for(int j = 1; j <= i; j++){
			cout << "* ";
		}
		cout << endl;
	}
}
