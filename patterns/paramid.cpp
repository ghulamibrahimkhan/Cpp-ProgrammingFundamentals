#include <iostream>
using namespace std;	

int main(){
	// paramid
	int rows = 7;
	for(int i = 1; i <= rows; i++){
		for(int j = 1; j <= rows-i; j++){
			cout << " ";
		}
		for(int k = 0; k < i; k++){
			cout << "* ";
		}
		cout << endl;
}	
//	cout << "Rev" << endl;
//		// reverse paramid
//		for (int i = rows; i >= 1; i--) {
//        	for (int j = 1; j <= rows - i; j++) {
//            	cout << "  ";
//        	}
//        	for (int k = 1; k <=  i - 1; k++) {
//            	cout << "* ";
//        	}
//        cout << endl;
//    }
}
