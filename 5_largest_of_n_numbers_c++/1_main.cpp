/*given n integer values, design an algorithm
to find the largest and smallest of the n numbers*/
#include<iostream>
#include<climits>
#include<fstream>
using namespace std;

int main() {
    ifstream myFile ("input.txt");
    if (!myFile) {
        cout << "unable to open file input.txt" << endl;
    }
    int n;
    myFile >> n;
    int maxsofar = INT_MIN;
    int minsofar = INT_MAX;
    int i = 1;
    while (i <=n) {
        int x;
        myFile >> x;
        if (x > maxsofar) {
            maxsofar = x;
        }
        if (x < minsofar) {
            minsofar = x;
        }
        i = i + 1;
    }
    cout << "Maximum: " << maxsofar << endl;
    cout << "Minimum: " << minsofar << endl;

    return 0;
}