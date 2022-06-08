#include <iostream>
using namespace std;

int main(void) {
    int a = 10;
    int &r = a; //now a can have one more name: r.
    cout << a<< endl;
    r++;
    cout << r << endl;
    cout << a;
}