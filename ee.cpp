#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int input_vector;
	int target_vector[5] = [1,2,3,4,5];
	int distance[5];

	for(int i=0; i<5; i++){
		distance[i] = (input_vector - target_vector)**2;
	}

	min(distance);

}
