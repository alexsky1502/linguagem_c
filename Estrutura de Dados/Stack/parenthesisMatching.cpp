#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        char data;
        Node *next;
};

class Stack{
    private:
        Node *top;
    public:
        Stack();
        ~Stack();
        void push(char x);
        char pop();
        char peek(int pos);
        int isEmpty();
        int isFull();
        char stackTop();
};

Stack::Stack(){
    top = nullptr;
}

Stack::~Stack(){
    Node *p = new Node;
} 

void Stack::push(char x){
    Node *t = new Node;
    if(t == nullptr){
        cout << "stack overflow";
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char Stack::pop(){
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

char Stack::stackTop(){
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

char Stack::peek(int pos){
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

int isBalanced(char *exp){
    Stack st;
    for(int i = 0; exp[i] != '\0'; i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            st.push(exp[i]);
        } else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(st.isEmpty()){
                return false;
            } else {
                if(st.stackTop() == exp[i]-1 || st.stackTop() == exp[i]-2){
                    st.pop();
                } else {
                    return false;
                }
            }
        }
    }

    if(st.isEmpty()){
        return true;
    } else {
        return false;
    }
}

int main() {
 
    char E[] = "{((a+b)*(c-d))}";
    cout << isBalanced(E) << endl;
 
    char F[] = "((a+b)*(c-d))}";
    cout << isBalanced(F) << endl;
 
    char G[] = "{(((a+b)*(c-d))";
    cout << isBalanced(G) << endl;
 
    return 0;
 
    return 0;
}