#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MaxSize 100

bool isEmpty();
bool isFull();
void Enqueue(int);
void Dequeue();
void Display();


// Global variables
int front, rear;
int A[MaxSize];
int main(){
    front = -1, rear = -1;
    Enqueue(2);
    Enqueue(34);
    Enqueue(244);
    Enqueue(212);
    Enqueue(91);
    Display();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Display();
}

bool isEmpty(){
    return (front == -1 && rear == -1);
}

bool isFull(){
    return (front == (rear+1) % MaxSize) ? true : false;
}

void Enqueue(int data){

    if(isFull()){
        printf("Queue is FUll :[\n");
        return;
    }
    else if(isEmpty()){
        rear = front = 0;
    }
    else{
        rear = (rear+1) % MaxSize;
    }

    A[rear] = data;  
}

void Dequeue(){
    if(isEmpty()){
        printf("Queue is empty ;/\n");
        return;
    }
    if(front == rear){
        rear = front = -1;
    }
    else{
        front = (front+1) % MaxSize;
    }
}

void Display(){
    int count = (rear + MaxSize - front) % MaxSize + 1; // after working out the math
    
    printf("Your elements.\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", A[(front+i)%MaxSize]);
    }
    
    printf("\n");

}