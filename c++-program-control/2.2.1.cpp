#include <iostream>
using namespace std;

/* counter controlled repetition with the for statement
Initialization and increment 
Can be comma-separated lists
*/

int main(){
	
	for(int counter = 1,i = 1; counter+i <= 10; counter++,i++){
		cout<<counter+i<<"\n";
	}
	
}