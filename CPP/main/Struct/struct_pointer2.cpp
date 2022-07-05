#include <iostream> //aula 20                               
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle* fun() { //retorna um ponteiro do tipo struct Rectangle
    struct Rectangle *p; 
    p = new Rectangle; //recebe o endereço do heap

    (*p).length = 15;
    p->breadth = 7;

    return p; //retorna o endereço criado no heap
}

int main() {
    struct Rectangle *ptr = fun(); //ele recebe o endereço p

    cout << "Length " << ptr->length << endl << "Breadth " << ptr->breadth << endl;

    return 0;
}