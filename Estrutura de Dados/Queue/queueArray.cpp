#include <bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int size;
    int front;
    int rear;
    int *Q;
};

void create(Queue *q, int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[q->size];
}

void enqueue(Queue *q, int x){
    if(q->rear == q->size-1){
        cout << "isFull";
    } else {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(Queue *q){
    int x= -1;
    if(q->rear == -1){
        cout << "is empty";
    } else {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void Display(Queue q){
    for(int i = 0; i <= q.rear; i++){
        cout << q.Q[i] << " ";
    }
    cout << "\n";
}

int main(){
    Queue q;
    create(&q,5);

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    Display(q);

    cout << dequeue(&q);
    return 0;
}