#include <stdio.h>
#include <stdlib.h>

struct Queue{
    int size;
    int front;
    int rear;
    char *Q;
};

void create(struct Queue *q, int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (char *)malloc(q->size*sizeof(char));
}

int isEmpty(struct Queue *q){
    if(q->rear == q->front){
        return 1;
    } else {
        return 0;
    }
}

void enqueue(struct Queue *q, char alpha){
    if(q->rear == q->size-1){
        printf("isFull");
    } else {
        q->rear++;
        q->Q[q->rear] = alpha;
    }
}

void dequeue(struct Queue *q){
    if(isEmpty(q)){
        printf("is Empty");
    } else {
        q->front++;
    }
}

void Insert(struct Queue *q1, struct Queue *q2, struct Queue *q3, char alpha, int pr){
    if(pr == 1){
        enqueue(q1, alpha);
    } else if (pr == 2){
        enqueue(q2, alpha);
    } else {
        enqueue(q3, alpha);
    }
}

void Delete(struct Queue *q1, struct Queue *q2, struct Queue *q3){
    if(!(isEmpty(q1))){
        dequeue(q1);
    } else if (!(isEmpty(q2))) {
        dequeue(q2);
    } else {
        dequeue(q3);
    }
}

void Display(struct Queue q){
    for(int i = q.front+1; i <= q.rear; i++){
        printf("%c ", q.Q[i]);
    }
    printf("\n");
}

int main(){
    struct Queue q1,q2,q3;

    create(&q1,10);
    create(&q2,10);
    create(&q3,10);

    int i;
    Insert(&q1,&q2,&q3,'a',1);
    Insert(&q1,&q2,&q3,'b',1);
    Insert(&q1,&q2,&q3,'c',2);
    Insert(&q1,&q2,&q3,'d',3);
    Insert(&q1,&q2,&q3,'e',2);
    Insert(&q1,&q2,&q3,'f',1);
    Insert(&q1,&q2,&q3,'g',2);
    Insert(&q1,&q2,&q3,'h',3);
    Insert(&q1,&q2,&q3,'i',2);
    Insert(&q1,&q2,&q3,'j',2);

    Display(q1);Display(q2);Display(q3);

    Delete(&q1,&q2,&q3);
    Delete(&q1,&q2,&q3);
    Delete(&q1,&q2,&q3);
    Delete(&q1,&q2,&q3);

    printf("\n\n\n");

    Display(q1);Display(q2);Display(q3);printf("\n\n\n");

    Insert(&q1,&q2,&q3,'z',2);Insert(&q1,&q2,&q3,'w',1);

    Display(q1);Display(q2);Display(q3);

    return 0;
}