#include<iostream>

using namespace std;

int main() {
	int x = 10;
	cout << x << endl;
	{
		cout << x << endl; //10
		int x = 20; // inner block's x is shadowing outer block's x
		//VARIABLE CAN BE REASSIGNED IF IT HAS DIFFERENT SCOPE
		int y = 30;
		cout << x << " " << y << endl;
	}
	cout << x << endl;


	return 0;
}