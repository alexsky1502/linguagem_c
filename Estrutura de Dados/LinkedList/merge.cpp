#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
}*first = nullptr, *second = nullptr, *third = nullptr;

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

void create2(int A[], int n){
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

void Merge(Node *p, Node *q){
    Node *last;
    if(p->data < q->data){
        third = last = p;
        p = p->next;
        third->next = nullptr;
    } else {
        third = last = q;
        q = q->next;
        third->next = nullptr;
    }
    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p=p->next;
            last->next = nullptr;
        } else {
            last->next = q;
            last = q;
            q = q->next;
            last->next = nullptr;
        }
    }
    if(p){
        last->next = p;
    }

    if(q){
        last->next = q;
    }
}

int main(){
    int A[]={10,20,40,50,60};
    int B[]={15,18,25,30,55};
    create(A,5);
    create2(B,5);


    Merge(first,second);
    Display(third);

    return 0;
}