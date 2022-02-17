
#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *left;
struct node *right;
};
void postOrder();
struct node *createNode(int n){
struct node *newNode;
newNode=(struct node*)malloc(sizeof(struct node));

newNode->data=n;
newNode->left=NULL;
newNode->right=NULL;

return newNode;
}

void postOrder(struct node *root){
if(root==NULL)
    return;

postOrder(root->left);
postOrder(root->right);
printf("%d ",root->data);
}


main(){


struct node *root=createNode(1);
root->right=createNode(2);
root->right->right=createNode(5);
root->right->right->left=createNode(3);
root->right->right->right=createNode(6);
root->right->right->left->right=createNode(4);

postOrder(root);

return 0;
}

