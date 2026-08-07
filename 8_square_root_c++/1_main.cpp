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
    int ans = 0;
    while(ans * ans <= n) {
        ans = ans + 1;
    }
    ans = ans - 1;
    cout << ans << endl;
}
