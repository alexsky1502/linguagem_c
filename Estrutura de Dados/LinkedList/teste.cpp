#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int main(){

    //basic node
    struct Node *p;
    p = new Node;
    p->data = 10;
    p->next = 0;

    cout << p << endl;
    cout << p->data << endl;
    cout << p->next << endl;

    //if a pointer is pointing nowhere, somewhere, or somewhere after or not
    if(p==nullptr){
        cout << "pointer poiting nowhere" << endl;
    }

    if(p!=nullptr){
        cout << "pointer pointing somewhere" << endl;
    }

    if(p->next == nullptr){
        cout << "it hasnt some node after" << endl;
    } else {
        cout << "it has some node after";
    }
}