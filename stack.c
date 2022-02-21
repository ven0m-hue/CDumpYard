#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct  Node
{
    int data;
    struct Node* next;
};

struct Node* head;

struct Node* GetNewNode(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->next = NULL;  
    return newNode;
}

void Push(int data){
    struct Node* newNode = GetNewNode(data);
    struct Node* temp = NULL;
    
    if(head == NULL){
        head = newNode;
        return;
    }
    temp = head; 
    newNode->next = temp;
    head = newNode;   
}

void Pop(){
    struct Node* temp = head;
    if (temp == NULL) return;
    head = temp->next;
    free(temp);
    temp = NULL;
}

bool ISempty(){
    if (head == NULL) return true;
    else return false;
}

int  Top(){
    struct Node* temp = head;
    return temp->data;
}

void display(){
    struct Node* temp = head;
    if(temp == NULL) return;

    printf("The elements:");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

}


int main(){
    head = NULL;
    Push(1);
    Push(2);
    Push(3);
    Push(14);
    Pop();
    Pop();
    Pop();
    Push(4000);
    Pop();
    Pop();
    ISempty();
    int top = Top();

    display();
    printf("\n %d", top);
}


