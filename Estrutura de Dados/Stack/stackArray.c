#include <stdio.h>
#include <stdlib.h>

struct Stack{
    int size;
    int top;
    int *s;
};

void Create(struct Stack *st){
    st->top = -1;
    scanf("%d", &st->size);
    st->s = (int *)malloc(st->size*sizeof(int));
}

void Display(struct Stack st){
    for(int i = st.top; i >= 0; i--){
        printf("%d ", st.s[i]);
    }
    printf("\n");
}

void Push(struct Stack *st, int x){
    if(st->top == st->size-1){
        printf("overflow");
    } else {
        st->top++;
        st->s[st->top] = x;
    }
}

int Pop(struct Stack *st){
    int x = -1;
    if(st->top == -1){
        printf("underflow");
    } else {
        x = st->s[st->top];
        st->top--;
    }

    return x;
}

int Peek(struct Stack st, int pos){
    int x = -1;
    int index = st.top-pos+1;
    if(index < 0 || index > st.size-1){
        printf("invalid position\n");
    } else {
        x = st.s[st.top-pos+1];
    }
    return x;
}

int stackTop(struct Stack st){
    if(st.top == -1){
        return -1;
    } else {
        return st.s[st.top];
    }
}

int isEmpty(struct Stack st){
    if(st.top == -1){
        return 1;
    } else {
        return 0;
    }
}

int isFull(struct Stack st){
    if(st.top == st.size-1){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    struct Stack st;
    Create(&st);

    Push(&st,10);
    Push(&st,20);
    Push(&st,30);
    Push(&st,40);

    printf("%d \n", Peek(st, 3));

    Pop(&st);

    Display(st);

    return 0;
}