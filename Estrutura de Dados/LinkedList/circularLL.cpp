#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
} *head;

void create(int A[], int n){
    int i;
    Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;
    for(int i = 1; i < n; i++){
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

int Length(Node *p){
    int len = 0;
    do {
        len++;
        p = p->next;
    } while (p != head);

    return len;
}

void Display(Node *p){
    do{
        cout << p->data << " ";
        p = p->next;
    } while (p!= head);
    cout << endl;
}

void Rdisplay(Node *p){
    static int flag = 0;
    while(p!=head || flag == 0){
        flag = 1;
        cout << p->data;
        Rdisplay(p->next);
    }
    flag = 0;
}

void Insert(Node *p, int index, int x){
    Node *t;
    int i;

    if(index < 0 || index > Length(p)){
        return;
    }

    if(index == 0){
        t = new Node;
        t->data = x;
        if(head == nullptr){
            head = t;
            head->next = head;
        } else {
            while(p->next != head){
                p = p->next;
            }
            p->next = t;
            t->next = head;
            head = t;
        }
    } else {
        for(i = 0; i < index - 1; i++){
            p = p->next;
        }
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int Delete(Node *p, int index){
    Node *q = nullptr;
    int i, x;

    if (index < 0 || index > Length(p)){
        return -1;
    }

    if(index == 1){
        do {
            p = p->next;
        } while (p != head);
        x = head->data;
        if(head == p){
            delete head;
            head = nullptr;
        } else {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    } else {
        for(i = 1; i < index; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }

    return x;
}

int main(){
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);

    Insert(head, 2, 10);
    Delete(head, 2);

    Display(head);
    return 0;
}