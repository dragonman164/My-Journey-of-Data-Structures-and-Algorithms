#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node* right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

//given inorder and preorder trees and make a BTree form these 2 arrays
node* buildTreefromInPre(int start, int end, int *inorder,int *preOrder)
{
    static int i=0;
    if(start>end)
    {
        return NULL;
    }else{
        node*root=new node(preOrder[i]);
        int index=-1;
        for(int j=start; j<=end;j++)
        {
            if(inorder[j]==preOrder[i])
            {
                index=i;
                break;
            }
        }
        i++;
        root->left=buildTreefromInPre(start,index-1,inorder,preOrder);
        root->left=buildTreefromInPre(index,end,inorder,preOrder);
        return root;
    }
}


node* buildTree()
{
    int d;
    cin>>d;
        if(d==-1)
        {
            return;
        }
    node * root= new node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
        
}

void print(node * root)
{
    if(root==NULL)
    {
        return;
    }else{
        cout<<root->data<<" ";
        print(root->left);
        print(root->right);
    }
}

int main()
{

}