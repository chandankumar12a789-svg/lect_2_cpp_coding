// given N integers value, design an algorithm to find the sum of its digit
#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ifstream myFile("input.txt");
    if (!myFile) {
        cout << "unable to open file input.txt" << endl;
    }
    int n;
    myFile >>n;
    int sum = 0;
	while ( n > 0) {
		int d = (n % 10);
		sum = sum + d;
		n = n / 10;

	}
	cout << "sum = " << sum << endl;

}