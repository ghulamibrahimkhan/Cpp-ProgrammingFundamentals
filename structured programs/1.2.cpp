#include <iostream>
using namespace std;

/* Develop a class-averaging program that will process an arbitrary number of grades each time the program is run.
Unknown number of students
*/

int main(){
	
	int total = 0;
	int counter = 0;
	int studentGrade;
	
	while(studentGrade != -1){
		cout<<"Enter Student's grade: ";
		cin>>studentGrade;
		total += studentGrade;
		counter += 1;
		cout<<counter;
	}
	
	float average;
	 
	if(counter != 0){
		average = total/(counter);
		cout<<counter;
		cout<<"Class average is : "<<average;
	}else{
		cout<<"No grades were entered";
	}
	
	return 0;
}