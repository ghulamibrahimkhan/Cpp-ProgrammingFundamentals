#include <iostream>
using namespace std;

int main(){
	
	int c = 5;
	
	//demonsrating postincrement
	cout<<c;
	cout<<"\n"<<c++;
	cout<<"\n"<<c;
	
	c = 5;
	
	//demonsrating preincrement
	cout<<"\n"<<c;
	cout<<"\n"<<++c;
	cout<<"\n"<<c;
	
	cout<<"\n for loop";
	for(int i =0; i<=5; i++){
		cout<<i;
	}
	cout<<"\n for loop";
	for(int i =0; i<=5; ++i){
		cout<<i;
	}
	
	return 0;
	
}