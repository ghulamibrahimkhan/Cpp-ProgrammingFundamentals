#include <iostream>
using namespace std;

int main(){
	
	int rows = 6;
	
	cout << " 3.1" << endl;
	
	for(int i = 1; i < rows; i++){
		for(int j = i; j < rows; j++){
			cout << "* ";
		}
		cout << endl;
		for(int k = 0; k < i; k++){
			cout << "  ";
		}
	}

	
	cout << endl<< " 3.2" << endl;
		
	for(int i = 1; i < rows; i++){
		for(int j = i; j < rows; j++){
			cout << "*";
		}
		cout << endl;
		for(int k = 0; k < i; k++){
			cout << " ";
		}
	}
}
