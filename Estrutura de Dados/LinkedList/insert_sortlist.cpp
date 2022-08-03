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

void SortedInsert(Node *p, int x){
    Node *t, *q = nullptr;
    t = new Node;
    t->data = x;
    t->next = nullptr;

    if(first == nullptr){
        first = t;
    } else {
        while(p && p->data < x){
            q = p;
            p = p->next;
        }

        if(p == first){
            t->next = first;
            first = t;
        } else {
            t->next = q->next;
            q->next = t;
        }
    }
}

int main(){
    int A[] = {10,20,30,40,50};
    create(A,5);

    SortedInsert(first, 5);
    Display(first);

    return 0;
}