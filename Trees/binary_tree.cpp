#include<stdio.h>
#include "QueueCpp.h"

class Tree{
    public:
        Node *root;
        Tree(){root=NULL;}
        void CreateTree();
        void Preorder(Node *p);
        void Inorder(Node *p);
        void Postorder(Node *p);
        void Levelorder(Node *p);
        void Heightorder(Node *root);
};

void Tree::CreateTree()
{
 Node *p,*t;
 int x;
 Queue q(100);

 printf("Enter root value ");
 scanf("%d",&x);
 root=new Node;
 root->data=x;
 root->lchild=root->rchild=NULL;
 q.enqueue(root);

 while(!q.isEmpty())
 {
 p=q.dequeue();
 printf("enter left child of %d ",p->data);
 scanf("%d",&x);
 if(x!=-1)
 {
 t=new Node;
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->lchild=t;
 q.enqueue(t);
 }
 printf("enter right child of %d ",p->data);
 scanf("%d",&x);
 if(x!=-1)
 {
 t=new Node;
 t->data=x;
 t->lchild=t->rchild=NULL;
 p->rchild=t;
 q.enqueue(t);
 }
 }
}


void Tree:: Preorder(struct Node *p)
{
 if(p)
 {
 printf("%d ",p->data);
 Preorder(p->lchild);
 Preorder(p->rchild);
 }
}
void Tree::Inorder(struct Node *p)
{
 if(p)
 {
 Inorder(p->lchild);
 printf("%d ",p->data);
 Inorder(p->rchild);
 }
}
void Tree::Postorder(struct Node *p)
{
 if(p)
 {
 Postorder(p->lchild);
 Postorder(p->rchild);
 printf("%d ",p->data);
 }
}

int main(){
    Tree t;
    t.CreateTree();
    t.Preorder(t.root);


    return 0;
}