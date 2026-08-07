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
    double ans = 0;
    while(ans * ans <= n) {
        ans = ans + 1;
    }
    ans = ans - 1;

     while(ans * ans <= n) {
        ans = ans + 0.1;
    }
    ans = ans - 0.1;

     while(ans * ans <= n) {
        ans = ans + 0.01;
    }
    ans = ans - 0.01;

     while(ans * ans <= n) {
        ans = ans + 0.001;
    }
    ans = ans - 0.001;
    //......................
    cout << ans << endl;
}