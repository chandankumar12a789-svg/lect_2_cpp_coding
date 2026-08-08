// given a positive number n, design an algorithm to rteverse the number
#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream myFile ("input.txt");
    if (!myFile) {
        cout << "unable to open file input.txt" << endl;

    }
    int n;
    myFile >> n;
    int rev = 0;
    while (n > 0) {
        int d;
        d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }
    cout << rev << endl;
    return 0;
}
 

