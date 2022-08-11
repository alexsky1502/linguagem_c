#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class Stack{
    private:
        Node *top;
    public:
        Stack();
        ~Stack();
        void push(int x);
        int pop();
        int peek(int pos);
        int isEmpty();
        int isFull();
        int stackTop();
};

Stack::Stack(){
    top = nullptr;
}

Stack::~Stack(){
    Node *p = new Node;
} 

void Stack::push(int x){
    Node *t = new Node;
    if(t == nullptr){
        cout << "stack overflow";
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop(){
    int x = -1;
    Node *t = new Node;
    if(top == nullptr){
        cout << "stack underflow";
    } else {
        x= top->data;
        t = top;
        top = top->next;
        delete t;
    }
    return x;
}

int Stack::isEmpty(){
    if(top == nullptr){
        return 1;
    } else {
        return 0;
    }
}

int Stack::stackTop(){
    if(top == nullptr){
        cout << "is empty";
    } else {
        return top->data;
    }
}

int Stack::isFull(){
    Node *p = new Node;
    if(p == nullptr){
        delete p;
        return 1;
    } else {
        delete p;
        return 0;
    }
}

int Stack::peek(int pos){
    if(isEmpty()){
        return -1;
    } else {
        Node *p = top;
        for(int i = 0; p != nullptr && i < pos-1; i++){
            p = p->next;
        }

        if(p == nullptr){
            return -1;
        } else {
            return p->data;
        }
    }
}

int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Stack stk;
 
    // Populate stack
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.push(A[i]);
    }
 
    cout << "Stack peek at 3rd: " << stk.peek(3) << endl;
    cout << "Stack peek at 10th: " << stk.peek(10) << endl;
    cout << "Stack top: " << stk.stackTop() << endl;
    cout << "Stack full: " << stk.isFull() << endl;
    cout << "Stack empty: " << stk.isEmpty() << endl;
 
    // Pop out elements from stack
    cout << "Popped: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cout << stk.pop() << ", " << flush;
    }
    cout << endl;
 
    // Underflow
    cout << stk.pop() << endl;
 
    return 0;
}