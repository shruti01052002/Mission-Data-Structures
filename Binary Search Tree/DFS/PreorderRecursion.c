#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* Create()
{
    int x;
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data and -1 for no node:\n");
    scanf("%d",&x);
    if(x==-1)
    return 0;
    newnode->data = x;
    printf("Enter left child of node %d\n", x);
    newnode->left = Create();
    printf("Enter right child of node %d\n", x);
    newnode->right = Create();
    return newnode;
}
void Preorder(struct node* root)
{
    if(root==0)
    {return;}
    printf("%d->", root->data);
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(struct node* root)
{
    if(root==0)
    {return;}
    Preorder(root->left);
    Preorder(root->right);
    printf("%d->", root->data);
}
void Postorder(struct node* root)
{
    if(root==0)
    {return;}
    Preorder(root->left);
    printf("%d->", root->data);
    Preorder(root->right);
}
int main() {
    struct node* root;
    root = 0;
    root = Create();
    printf("Preorder is: \n");
    Preorder(root);
    return 0;
}

/*
Output:
Enter data and -1 for no node:
4
Enter left child of node 4
Enter data and -1 for no node:
5
Enter left child of node 5
Enter data and -1 for no node:
7
Enter left child of node 7
Enter data and -1 for no node:
-1
Enter right child of node 7
Enter data and -1 for no node:
-1
Enter right child of node 5
Enter data and -1 for no node:
8
Enter left child of node 8
Enter data and -1 for no node:
-1
Enter right child of node 8
Enter data and -1 for no node:
-1
Enter right child of node 4
Enter data and -1 for no node:
10
Enter left child of node 10
Enter data and -1 for no node:
-1
Enter right child of node 10
Enter data and -1 for no node:
1
Enter left child of node 1
Enter data and -1 for no node:
-1
Enter right child of node 1
Enter data and -1 for no node:
-1
Preorder is:
4->5->7->8->10->1->
Process returned 0 (0x0)   execution time : 66.495 s
Press any key to continue.
*/
