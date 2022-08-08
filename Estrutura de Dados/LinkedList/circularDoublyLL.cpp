#include <iostream>
using namespace std;

class Node{
    public:
        Node *prev;
        int data;
        Node *next;
} *first = nullptr;

void create(int A[], int n){
    Node *t; 
    Node *last = new Node;
    first = new Node;

    first->data = A[0];
    first->next = first;
    first->prev = first;
    last = first;

    for(int i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = first;
        t->prev = last;
        last->next = t;
        last = t;
    }

    first->prev = last;
}

void Display(Node *p){
    do{
        cout << p->data << " ";
        p = p->next;
    } while (p != first);
    cout << endl;
}

int Length(Node *p){
    int len = 0;
    if(p == nullptr){
        return len;
    }
    do {
        len++;
        p = p->next;
    } while (p != first);

    return len;
}

void Insert(Node *p, int index, int x){

    if(index < 0 || index > Length(p)){
        return;
    }

    if(index == 0){
        Node *t = new Node;
        t->data = x;
        t->next = first;
        t->prev = first->prev;
        first->prev->next = t;
        first->prev = t;
        first = t;
    } else if (index > 0 && index < Length(p)){
        Node *t = new Node;
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
    } else {
        Node *t = new Node;
        t->next = first;
        t->prev = first->prev;
        first->prev->next = t;
        first->prev = t;
        t->data = x;
    }
} 

int Delete(Node *p, int index){
    Node *t = new Node;
    int x;

    //if(index < 0 || index > Length(p)){
        //return -1;
    //}

    if(index == 1){
        p = first;
        if(p->next){
            p->next->prev = p->prev;
            p->prev->next = p->next;
            x = p->data;
            first = p->next;
            delete p;
        } else {
            delete p;
            p = nullptr;
        }
    } else {
        p = first;
        for(int i = 0; i < index-1; i++){
            p = p->next;
        }
        x = p->data;
        p->prev->next = p->next;
        p->next = p->prev;
        delete p;
    }
    return x;
}

int main(){
    int A[] = {1,2,3,4,5};
    create(A, 5);
    Display(first);
    Insert(first, 5, 10);
    Display(first);
    cout << Delete(first, 2) << endl;
    Display(first);
}