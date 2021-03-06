#include <stdio.h>
#include <stdlib.h>
using namespace std;
#include <bits/stdc++.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
stack<node*>q;

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


int main() {
    struct node* root;
    root = 0;
    root = Create();
    printf("InOrder Traversal is: \n");
    if(!root) cout<<"Tree is Empty"<<endl;
    else
    {
        struct node *temp = root;
        while(temp!=NULL or !q.empty())
        {
            if(temp!=NULL)
            {
                q.push(temp);
                temp = temp->left;
            }
            else
            {
                temp = q.top();
                q.pop();
                cout<<temp->data<<" ";
                temp = temp->right;
            }
        }
    }
    return 0;
}
