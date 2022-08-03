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

int count(Node *p){
    int l = 0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(Node *p){
    if(p != nullptr){
        return Rcount(p->next) + 1;
    } else {
        return 0;
    }
}

int sum(Node *p){
    int s = 0;
    while(p!=nullptr){
        s+=p->data;
        p=p->next;
    }
    return s;
}

int Rsum(Node *p){
    if(p==nullptr){
        return 0;
    } else {
        return Rsum(p->next) + p->data;
    }
}

int main(){
    int A[] = {3,5,7,10,25,8,32,2};
    create(A,8);

    cout << "count " << count(first) << endl;
    cout << "sum " << sum(first);
}