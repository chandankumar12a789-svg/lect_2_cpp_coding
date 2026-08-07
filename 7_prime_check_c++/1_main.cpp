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
    int i = 1;
    while (i*i < n) {
        if (n % i == 0) {
            cout << n << " is not prime" << endl;
            break;
        }
        i++;
    }
    if (i*i >= n)
    cout << n << " is prime" << endl;
    return 0;
}