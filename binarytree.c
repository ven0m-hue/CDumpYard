#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Binarytree
{
    int data;
    struct Binarytree* left;
    struct Binarytree* right;
};

struct Binarytree* GetNewNode(int);
struct Binarytree* Insert(struct Binarytree* root, int data);

bool Search(struct Binarytree* root,int data){
    if(root == NULL) return false;
    else if(root->data == data) return true;
    else if(data > root->data) return Search(root->right, data);
    else return Search(root->left, data);
}

int main(){
    //Globally declare the root node 
    int x;
    struct Binarytree* root = NULL;
    root = Insert(root,15); 
    root = Insert(root,10); 
    root = Insert(root,20); 
    root = Insert(root,12);

    printf("Enter the search element.\n");
    scanf("%d", &x);

    if(Search(root, x) == true)
        printf("Found");
    else 
        printf("Not Found");

}

struct Binarytree* GetNewNode(int data){ 
    struct Binarytree* newNode = (struct Binarytree *) malloc(sizeof(struct Binarytree));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Binarytree* Insert(struct Binarytree* root,int data){
    if(root == NULL)
        root = GetNewNode(data);
    else if(data <= root->data){
        root->left = Insert(root->left, data); 
    }
    else
        root->right = Insert(root->right, data);
    return root;
}