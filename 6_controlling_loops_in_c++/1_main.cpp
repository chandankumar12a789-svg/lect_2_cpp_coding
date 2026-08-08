#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream myFile ("input.txt");
    if (!myFile) {
        cout << "unable to open file input.txt" << endl;
    }
    int count = 0;
    int data;
while (true) {
    myFile >> data;
if (data < 0) {
    break;
}
count++;
}
cout << "count =" << count << endl;

return 0;
}