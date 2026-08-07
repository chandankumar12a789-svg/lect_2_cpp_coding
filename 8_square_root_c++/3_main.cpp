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
    int p;
    myFile >> p;
    double ans = 0;
    int i = 0;
    double inc = 1;
    while (i <= p) {
      while(ans * ans <= n) {
        ans = ans + inc;
    }
    ans = ans - inc;
    inc = inc / 10;
    i = i + 1;
}
    cout << ans << endl;
}




// #include<iostream>
// #include<fstream>
// using namespace std;
// int main() {
//     ifstream myFile ("input.txt");
//     if (!myFile) {
//         cout << "unable to open file input.txt" << endl;
//     }
//     int n;
//     myFile >> n;
//     int p;
//     myFile >> p;
//     double ans = 0;
//      while(ans * ans <= n) {
//         ans = ans + 1;
//     }
//     ans = ans - 1;
//     int i = 1;
//     double inc = 0.1;
//     while (i <= p) {
//       while(ans * ans <= n) {
//         ans = ans + inc;
//     }
//     ans = ans - inc;
//     inc = inc / 10;
//     i = i + 1;
// }
//     cout << ans << endl;
// }