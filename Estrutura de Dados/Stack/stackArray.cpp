#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int *s;
};

void Create(Stack *st){
    st->top = -1;
    scanf("%d", &st->size);
    st->s = new int[st->size];
}

void Display(Stack st){
    for(int i = st.top; i >= 0; i--){
        cout << st.s[i];
    }
    printf("\n");
}

void Push(Stack *st, int x){
    if(st->top == st->size-1){
        cout << "overflow";
    } else {
        st->top++;
        st->s[st->top] = x;
    }
}

int Pop(Stack *st){
    int x = -1;
    if(st->top == -1){
        cout << "underflow";
    } else {
        x = st->s[st->top];
        st->top--;
    }

    return x;
}

int Peek(Stack st, int pos){
    int x = -1;
    int index = st.top-pos+1;
    if(index < 0 || index > st.size-1){
        cout << "invalid position\n";
    } else {
        x = st.s[st.top-pos+1];
    }
    return x;
}

int stackTop(Stack st){
    if(st.top == -1){
        return -1;
    } else {
        return st.s[st.top];
    }
}

int isEmpty(Stack st){
    if(st.top == -1){
        return 1;
    } else {
        return 0;
    }
}

int isFull(Stack st){
    if(st.top == st.size-1){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    Stack st;
    Create(&st);

    Push(&st,10);
    Push(&st,20);
    Push(&st,30);
    Push(&st,40);

    cout << Peek(st, 3) << endl;

    Pop(&st);

    Display(st);

    return 0;
}