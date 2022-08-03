#include <iostream>
#include <stdio.h>
#include <stdlib.h>

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

int count(Node *p){
    int l = 0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

void Insert(Node *p, int index, int x){
    Node *t;
    int i;

    if(index < 0 || index > count(p)){
        return ;
    }

    t = new Node;
    t->data = x;

    if (index == 0){
        t->next = first;
        first = t;
    } else {
        for(i = 0; i < index-1; i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

void Display(Node *p){
    if(p != nullptr){
        cout << p->data << " ";
        Display(p->next);
    }
}

int main(){
    int A[] = {10,20,30,40,50};
    create(A, 5);

    Insert(first, 0, 5);

    Display(first);
    return 0;
}