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

int Delete(Node *p, int index){
    Node *q = nullptr;
    int x = -1, i;

    if(index < 1 || index > count(p)){
        return -1;
    }
    if(index == 1){
        q = first;
        x = first->data;
        first = first->next;
        delete p;
        return x;
    } else {
        for(i = 0; i < index -1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

int main(){
    int A[] = {10,20,30,40,50};
    create(A, 5);

    cout << Delete(first, 2) << endl;
    Display(first);
    return 0;
}