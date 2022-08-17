#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
} *front = nullptr, *rear = nullptr;

void enqueue(int x){
    Node *t;
    t = new Node;
    if(t == nullptr){
        cout << "is Full";
    } else {
        t->data = x;
        t->next = nullptr;
        if(front == nullptr){
            front = rear = t;
        } else {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue(){
    int x = -1;
    struct Node *t;
    if(front == nullptr){
        cout << "is Empty";
    } else {
        x = front->data;
        t = front;
        front = front->next;
        delete t;
    }
    return x;
}

void Display(){
    struct Node *p = front;
    while(p){
        cout << p->data;
        p = p->next;
    }
    cout << "\n";
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    Display();

    cout << dequeue();

    return 0;
}