#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
}*first = nullptr;

void create(int A[], int n){
    int i;
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for(i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

void Display(Node *p){
    if(p != nullptr){
        cout << p->data << " ";
        Display(p->next);
    }
}

int count(Node *p){
    int l = 0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

int isSorted(Node *p){
    int x = -32768;
    while(p != nullptr){
        if(p->data < x){
            return 0;
        }
        x = p->data;
        p = p->next;
    }
    return 1;
}

int main(){
    int A[] = {10,20,15,30,40,50};
    create(A, 5);

    cout << isSorted(first);

    return 0;
}