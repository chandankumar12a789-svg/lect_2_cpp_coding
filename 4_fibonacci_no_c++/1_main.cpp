#include<iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream myFile ("input.txt");
    if (!myFile) {
        cout << "unable to open file input.txt" << endl;
    }
int n;
myFile >> n;
if (n == 0 || n == 1) {
    cout << n << endl;
}
else {
    int a = 0;
    int b = 1;
    int i = 1;

     while (i <= n - 1) {
        int c = a + b;
        a = b;
        b = c;
        i = i + 1; 
}
cout << b << endl;

    
     }
     return 0;
}
/*#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	if (n == 0  or n == 1) {
		cout << n;
	}
	else {
		int a = 0;
		int b = 1;
		int i = 1;
		int c = 0;
		while (i <= n - 1 ) {
			c = (a + b);
			a = b;
			b = c;
			i = i + 1;

		}
		cout << c << endl;
	}


	return 0;
}
*/