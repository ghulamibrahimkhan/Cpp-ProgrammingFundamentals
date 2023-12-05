#include <iostream>
using namespace std;

int main(){
	int counter = 1;
	
	while(counter <= 10){
		cout<<counter<<"\n";
		counter++;
	}
	
	int count = 0;
	while(++count <= 10){
		cout<<count<<"\n";
	}
	return 0;
}