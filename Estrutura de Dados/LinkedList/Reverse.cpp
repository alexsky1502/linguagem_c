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

void Reverse(Node *p){
    Node *q = nullptr, *r = nullptr;

    while(p!=nullptr){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void Reverse2(Node *q, Node *p){
    if(p){
        Reverse2(p, p->next);
        p->next = q;
    }
    else {
        first = q;
    }
}

int main(){
    int A[]={10,20,40,50,60};
    create(A,5);
    Reverse(first);
    Display(first); 
    return 0;
}