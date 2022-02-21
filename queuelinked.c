#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int data;
    struct Node* next;
}; 

struct Node* front;
struct Node* rear;
struct Node* GetNewNode(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->next = 0;
    return newNode;
}

void Enqueue(int data){
    struct Node* newNode = GetNewNode(data);
    if(front == NULL && rear == NULL){
        front = newNode;
        rear  = front;
        return;
    }
    rear->next = newNode;
    rear = newNode;
   
}

void Dequeue(){

    if(front == NULL && rear == NULL){
        printf("\nERROR, Queue is empty.");
        return;
    }
    struct Node* temp = front;
    front = temp->next;
    free(temp);
    temp = NULL;

}

void Display(){

    if(front == NULL && rear == NULL) return;
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node*));
    temp = front;
    printf("The elements. \n");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}


int main(){
    front = rear = NULL;
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    //Enqueue(5);
    Dequeue();
    Display();
}