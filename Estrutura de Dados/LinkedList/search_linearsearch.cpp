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

Node* LSearch(Node *p, int key){
    Node *q;
    while(p != nullptr){
        if(key==p->data){
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return nullptr;
}

Node* RSearch(Node *p, int key){
    if(p==nullptr){
        return nullptr;
    }
    if(key==p->data){
        return p;
    }
    return RSearch(p->next, key);
}

int main(){
    Node *temp;
    int A[] = {3,5,7,10,25,8,32,2};
    create(A,8);

    temp = LSearch(first, 8);
    cout << temp->data;

    return 0;
}