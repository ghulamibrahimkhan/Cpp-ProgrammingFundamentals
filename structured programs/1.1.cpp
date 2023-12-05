#include <iostream>
using namespace std;

/* Loop repeated until counter reaches a certain value
Definite repetition: number of repetitions is known 
Example:  A class of ten students took a quiz. The grades (integers in the range 0 to 100) for this quiz are available to you. Determine the class average on the quiz
*/

int main(){
	
	int total = 0;
	int counter = 1;
	int average;
	
	while(counter <= 10){
		int studentGrade;
		cout<<"Enter Student "<<counter<< " grade: ";
		cin>>studentGrade;
		total += studentGrade;
		counter++;
	}
	average = total/counter;
	
	cout<<average;
}