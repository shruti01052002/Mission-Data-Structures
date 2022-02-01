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
stack<node*>s;

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
        s.push(root);
        struct node* curr = root;
        struct node* prev = NULL;

        while(curr!=NULL or !s.empty())
        {
            if(curr!=NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            else
            {
                curr = s.top();
                if(curr->right==NULL or curr->right==prev)
                {
                    cout<<curr->data<<" ";
                    s.pop();
                    prev = curr;
                    curr = NULL;
                }
                else
                curr = curr->right;
            }
        }
    }
    return 0;
}
