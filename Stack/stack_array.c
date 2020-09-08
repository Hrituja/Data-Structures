#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *S;
};


void CreateStack(struct Stack *st){
    printf("Enter size\n");
    scanf("%d",&st->size);
    st->top = -1;
    st->S = (int*)malloc(st->size * sizeof(int));
}

void Display(struct Stack st){
    int i;
    for(i= st.top ;i>=0;i--){
        printf("%d ", st.S[i]);

    }
}

void push(struct Stack *st,int x){
    if(st->top == st->size-1){
        printf("Stack overflow");
    }
    else{
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct Stack *st){
    int x=-1;
        if(st->top == -1){
        printf("Stack underflow");
        return 0;
    }
    else{
        x = st->S[st->top];
        st->top--;
        return x;
    }

}

int peek(struct Stack st,int pos){
    int x =-1;
    if(st.top - pos + 1 < 0){
        printf("Invalid Position\n");
    }
    else{
        x = st.S[st.top - pos + 1];
        return x;
    }
}

int isEmpty(struct Stack st){
    if(st.top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct Stack st){
    if(st.top == st.size -1){
        return 0;
    }
    return 1;
}
int main(){
struct Stack st;
CreateStack(&st);
push(&st,10);
push(&st,20);
push(&st,30);
push(&st,40);
push(&st,50);

Display(st);
printf("Popped ele %d",peek(st,2));


}