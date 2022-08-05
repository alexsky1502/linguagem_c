#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
}*first = nullptr, *second = nullptr;

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

int isLoop(Node *f){
    Node *p, *q;
    p = q = f;

    do{
        p = p->next;
        q = q->next;
        if(q){
            q = q->next;
        }
    }while(p && q && p!=q);

    if(p==q){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    Node *t1, *t2;
    int A[]={10,20,30,40,50};
    create(A, 5);

    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;
    cout << t1->data << " " << t2->data << endl;
    cout << isLoop(first);
    return 0;
}