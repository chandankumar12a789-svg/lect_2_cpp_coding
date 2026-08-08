#include<iostream>

using namespace std;

int x = 100; // global variable
int main() {

	cout << x << endl; // 100

	int x = 10;
	cout << x << endl; //10 shadowing global x
	{
		int x = 30;
		int y = 20;

		cout << x << " " << y <<" " << ::x << endl;
		cout << ::x << endl; //SCOPE RESOLUTION OPERATOR
	}
	cout << x << endl;
	cout << ::x << endl; //100


	return 0;
}
 



/*
#include<iostream>

using namespace std;

int x = 100; // global variable

int main() {
	int x = 10; //local variable
	cout << x << " " << ::x << endl; // 10 100

	::x = ::x + 1;

	cout << x << " " << ::x <<  endl; // 10 101


	return 0;
}*/ 