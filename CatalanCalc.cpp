#include <iostream>
#include <string>
using namespace std;

int ComputeCatalan(int n);

int main() {

	cout << ComputeCatalan(7);
	cin.get();
	return(0);
}

int ComputeCatalan(int total) {
	if(total <= 1 ) {
		return(1);
	} else {
		int sum = 0;
		for(int i = 0; i < total; i ++) {
			sum += ComputeCatalan(i) * ComputeCatalan(total - i - 1);
		}
		return(sum);
	}
}