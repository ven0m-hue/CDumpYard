#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;

struct Node* getNewNode(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void Insert(int data){
    struct Node* newNode = getNewNode(data);
    if (head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void display(){

    struct Node* temp = head;
    printf("The list is: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

void Reverse(){

    struct Node* temp = head;
    if(temp == NULL) return;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
     printf("The list in Reverse is: ");
     while (temp != NULL)
     {
         printf("%d ", temp->data);
         temp = temp->prev;
     }
    printf("\n");
    
}

void Insertail(int data){
    struct Node* temp = head;
    struct Node* newNode = getNewNode(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode; 
    newNode->prev = temp;
     
}

void Insertion(int data, int n){
    struct Node* newNode = getNewNode(data);
    struct Node* temp1 = head;
    struct Node* temp2 = NULL;
    if(n == 1){
        head = newNode;
        return;
    }

    for (int i = 1; i < n-1; i++)
    {
        temp1 = temp1->next;
    }
    temp2 = temp1->next;
    newNode->prev = temp1;
    temp1->next = newNode;
    newNode->next = temp2;
    temp2->prev = newNode;
}

int main(){
    head = NULL;
    Insert(1); //display(); Reverse();
    Insert(2); //display(); Reverse();
    Insert(3); //display(); Reverse();
    Insertail(666); //display(); Reverse();
    Insertion(333,4); display(); Reverse();

}