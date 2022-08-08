#include <iostream>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node *next;
} *first = nullptr;

void create(int A[], int n){
    Node *t, *last;
    int i;

    first = new Node;
    first->data = A[0];
    first->prev = first->next = nullptr;
    last = first;

    for(i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = nullptr;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(Node *p){
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int length(Node *p){
    int len = 0;
    while(p){
        len++;
        p = p->next;
    }
    return len;
}

void insert(Node *p, int index, int x){
    Node *t;

    if(index < 0 || index > length(p)){
        return;
    }

    if(index == 0){
        t = new Node;
        t->data = x;
        t->next = first;
        t->prev = nullptr;
        first->prev = t;
        first = t;
    } else {
        t = new Node;
        t->data = x;
        for(int i = 0; i < index-1; i++){
            p = p->next;
        }
        t->next = p->next;
        t->prev = p;
        if(p->next){ //if it has some node after or not
            p->next->prev = t;
        }
        p->next = t;
    }
}

int Delete(Node *p, int index){
    //p = first
    int x;

    if(index < 0 || index > length(p)){
        return 0;
    }

    if(index == 1){
        first = first->next;
        x = p->data;
        delete p;
        if(first){
            first->prev = nullptr;
        }
    } else {
        for(int i = 0; i < index-1; i++){p = p->next;}
        p->prev->next = p->next;
        p->next->prev = p->prev;
        x = p->data;
        delete p;
    }

    return x;
}

void Reverse(Node *p){
    Node *temp = nullptr;

    while(p){
        temp = p->prev;
        p->prev = p->next;
        p->next = temp;
        p=p->prev;
    }
    if(temp != nullptr){
        first = temp->prev;
    }
}

int main(){
    int A[] = {10,20,30,40,50};
    create(A, 5);

    cout << "length is " << length(first) << endl;
    Reverse(first);
    insert(first, 4, 25);
    Delete(first, 5);
    display(first);

    return 0;
}