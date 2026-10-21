#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

struct node* addNode(struct node *tmp, int value) // 60, 70
{
    if (tmp == NULL)
    {
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = value;
        tmp->left = NULL;
        tmp->right = NULL;
        return tmp;
    }
    else
    {
        if (value > tmp->data)//70 > 50  70 > 60 
        {
            // right
            tmp->right = addNode(tmp->right, value);//null , 60
            //60->right =addNode(NULL,70);

        }
        else
        {
            tmp->left = addNode(tmp->left, value);
        }

    }
    return tmp;
}

int main()
{

    root = addNode(root, 50);    // NULL,50
    addNode(root, 60);           // 50 , 60
    addNode(root,70); 
    addNode(root,40); 
    addNode(root,30); 
    
 
    
    printf("\n%d ", root->left->left->data); // 30
    printf("\n%d ", root->left->data); // 40
    printf("\n%d ", root->data); // 50    
    printf("\n%d ", root->right->data); // 60
    printf("\n%d ", root->right->right->data); // 70

    return 0;
}