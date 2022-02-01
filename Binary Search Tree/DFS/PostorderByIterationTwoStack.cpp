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
stack<node*>s1, s2;

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
    printf("PostOrder Traversal is: \n");
    if(!root) cout<<"Tree is Empty"<<endl;
    else
    {
        s1.push(root);
        struct node* curr = NULL;
        while(!s1.empty())
        {
            curr = s1.top();
            s1.pop();
            s2.push(curr);
            if(curr->left) s1.push(curr->left);
            if(curr->right) s1.push(curr->right);
        }
        while(!s2.empty())
        {
            curr = s2.top();
            cout<<curr->data<<" ";
            s2.pop();
        }
    }
    return 0;
}
