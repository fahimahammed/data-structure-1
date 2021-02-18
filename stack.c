//Stack (Push, Pop, Peek)

#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int index = -1;

//push
int push(int x){
    if(index < CAPACITY -1){
        index = index + 1;
        stack[index]=x;
        printf("Successfully added item: %d\n",stack[index]);
    }
    else{
        printf("No space.\n");
    }
}

//pop
int pop(){
    if(index >= 0){
        printf("Pop item: %d\n",stack[index]);
        index = index -1;
    }
    else{
        printf("Empty Stack.");
    }
}

//peek
int peek(){
    if(index >= 0){
        printf("Peek: %d\n", stack[index]);
    }
    else{
        printf("Empty stack \n");
    }
}
int main(){

    peek();
    push(10);
    push(20);
    push(30);
    pop();
    push(40);
    peek();
    push(50);
    pop();
    push(60);
    return 0;
}
