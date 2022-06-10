#include <iostream>
using namespace std;

int* fun(int size) {
    int *p;
    p = new int[size]; // esse p está recebendo o endereço

    for (int i = 0; i < size; i++){
        p[i] = i + 1;
    }

    return p;
}

int main() {
    int* ptr, sz = 7;
    ptr = fun(sz); //esse está recebendo o endereço

    for (int i = 0; i < sz; i++){
        cout << ptr[i] << endl;
    }
    return 0;
}