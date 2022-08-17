#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

class Stack {
    public:
        Node *top;
        Stack();
};

Stack::Stack(){
    top = nullptr;
}

int isEmpty(Stack *st){
    if(st->top == nullptr){
        return 1;
    } else {
        return 0;
    }
}

void push(Stack *st, int x){
    Node *t = new Node;
    if(t == nullptr){
        cout << "is full";
    } else {
        t->data = x;
        t->next = st->top;  
        st->top = t;
    }
}

int pop(Stack *st){
    Node *t = st->top;
    int x = -1;
    if(st->top == nullptr){
        cout << "stack is empty";
    } else {
        st->top = st->top->next;
        x = t->data;
        delete t;
    }
    return x; 
}

void Display(Stack *st){
    Node *t = st->top;
    while(t){
        cout << t->data << " ";
        t = t->next;
    }
    cout << "\n";
}

void enqueue(Stack *st1, int x){
    push(st1, x);
}

int dequeue(Stack *st1, Stack *st2){
    int x = -1;
    if(isEmpty(st2)){
        if(isEmpty(st1)){
            cout << "stack 1 is empty";
            return x;
        } else {
            while(!(isEmpty(st1))){
                push(st2, pop(st1));
            }
        }
    } return pop(st2);
}

int main(){
    Stack s1, s2;
 
	enqueue(&s1,12);
	enqueue(&s1,50);
	enqueue(&s1,134);
	enqueue(&s1,56);
 
	Display(&s1);
 
	printf("\nElement Deleted: %d", dequeue(&s1, &s2));

    return 0;
}