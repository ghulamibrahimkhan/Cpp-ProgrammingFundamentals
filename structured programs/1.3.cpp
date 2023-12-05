#include <iostream>
using namespace std;

int main(){
	
	int count = 1;
	int pass  = 0;
	int fail  = 0;
	
	while(count <= 10){
		int grade;
		
		cout<<"Enter student grade: (1 = pass, 2 = fail): ";
		cin>>grade;
		count += 1;
		
		if(grade == 1){
			pass += 1;
		}else{
			fail += 1;
		}
	}
	
	cout<<"Student passed: "<<pass;
	cout<<"\nStudent failed: "<<fail;
	
	if(pass > 8){
		cout<<"\nRaise Tution Fee";
	}
	
	return 0;
}