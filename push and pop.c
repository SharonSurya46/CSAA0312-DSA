#include<stdio.h>
#define size 4
int top=-1,array[size];
void push(int value);
void pop();
void show();
int main(){
  push(10);
  push(20);
  push(30);
  push(40);
  printf("stack after push:\n");
  show();
  pop();
  pop();
  printf("stack after pop:\n");
  show();
}
void push(int value){
  if(top==size-1){
    printf("stack is full");
  }
  else{
    array[++top]=value;
    printf("push %d to stack\n",value);
  }
}
void pop(){
  if(top==-1){
    printf("stack is empty");
  }
  else{
    printf("poped value=%d\n",array[--top]);
  }
}
void show(){
  if(top==-1){
    printf("stack is empty");
  }
  else{
    for(int i=top;i>=0;i--){
      printf("%d\n",array[i]);
    }
  }
}
