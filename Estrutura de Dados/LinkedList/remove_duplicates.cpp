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

void RemoveDuplicate(Node *p){
    Node *q = p->next;
    while(q != nullptr){
        if(p->data != q->data){
            p = q;
            q = q->next;
        } else {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main(){
    int A[] = {10,20,20,40,50,50,50,60};
    create(A, 8);

    RemoveDuplicate(first);
    Display(first);

    return 0;
}