#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

int main()
{
    struct node *p = createNode(20);
    struct node *p1 = createNode(23);
    struct node *p2 = createNode(25);

    p->left = p1;
    p->right = p2;

    printf("This code only for represent the tree not printing the tree.\n");
    return 0;

}
