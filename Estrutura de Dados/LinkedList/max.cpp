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

int Max(Node *p){
    int max = INT32_MIN;

    while(p){
        if(p->data > max){
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int Rmax(Node *p){
    int x = 0;
    if(p==0){
        return INT32_MIN;
    }
    x = Rmax(p->next);
    if(x > p->data){
        return x;
    } else {
        return p->data;
    }
}

int main(){
    int A[] = {3,5,7,10,25,8,32,2};
    create(A,8);

    cout << Max(first) << endl;
    cout << Rmax(first);

    return 0;
}