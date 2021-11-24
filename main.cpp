#include "std_lib_facilities.h"
using namespace std;

int main() {


    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num  % 2 != 0) {
        cout << "The number" << num << " is odd."; }
    else {
        cout << "The number" << num << " is even."; }
    return 0;

}
