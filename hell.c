#include <stdio.h> 

#include <stdlib.h>



//Structre for linked list 

struct Node {

    int data;

    struct Node* next;

};



struct Node* head;

void Insert(int, int);   // function to insert into a list 

void delete(int);    // delete from nth node 

void display();     // function to display the list 

void reverse();   // iterative method

int main(){



    int n,x,y,z,a;

    head = NULL; // List is empty



    printf("Enter the no.of elements\n");

    scanf("%d", &n);



    for (int i=0; i<n; i++){

        printf("Insert the element at.\n");

        scanf("%d", &x);

        printf("The data at %d:.\n", x);

        scanf("%d", &y);

        Insert(x,y);

        display();       

    }

    printf("No.of elements to delete.\n");

    scanf("%d", &z);

    for (int i = 0; i < z; i++)

    {

        printf("Delete the element at.\n");

        scanf("%d", &a);

        delete(a);

        display();       

    }

    

     printf("Want to reverse the list jsut for fun?\n");

     printf("Doing it anyway :]\n");

     reverse();

     display();



}



void Insert(int n, int data){



    struct Node* temp1 = (struct Node*)  malloc(sizeof(struct Node));

    temp1->data = data;   // temp1 heap is initialized everytime and data is wrtieen to that temp1.

    temp1->next = head;  // Initilalized to null, at first regardless and later taken care.



    if(n == 1){   // if list was empty or if the element is inserted to the beginning of of the list 



        temp1->next = head; // whatever the head points to will be initialized 

        head = temp1;       // temp1 heap address is given to the global head

        return ;

        }



    struct Node* temp2 = (struct Node*)  malloc(sizeof(struct Node));  

    temp2 = head;   // temp2 in the heap is pointed to the initially present node.

    for (int i = 1; i < n-1; i++)  // for loop to traverse to the n-1 th element. O(n). 

    {

        temp2 = temp2->next;      // node address of temp2 pointing to some other node is given to the temp pointer itslef 

    }

        temp1->next = temp2->next;  // The above obtained address is given back to the temp1 node 

        temp2->next = temp1;       // temp1 address is given to the temp2 node.



    }



void delete(int n){

    struct Node* temp1 = head;

    // Sepecial case, if there is only one element  

    if(n == 1){

        head = temp1->next;

        free(temp1);

        return;

    }

    

    for (int i = 1; i < n-1; i++)

    {

        temp1 = temp1->next;

    } // temp1 points to --> (n-1 th) node address 

    struct Node* temp2 = temp1->next;  // temp2 points --> nth node 

    temp1->next = temp2->next;         // temp2-> next pointing to n+1 th node is given to temp1-> next

                                      // succesfully detached. 

    free(temp2); // free the memory.

}



void display(){

   struct  Node* temp = head;



    printf("Your elements:\t"); 

    while( temp != NULL){

        printf("%d ", temp->data);

        temp = temp->next;

    }

    printf("\n");

}



void reverse(){

    struct Node *present, *past, *future;

    past = NULL;

    present = head;



    while(present != NULL){

        future = present->next;

        present->next = past;

        past = present;

        present = future;

    }

    head = past;  

}
}
