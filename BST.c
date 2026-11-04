#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL;

struct node *addNode(struct node *tmp, int value) // 60, 70
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
        if (value > tmp->data) // 70 > 50  70 > 60
        {
            // right
            tmp->right = addNode(tmp->right, value); // null , 60
            // 60->right =addNode(NULL,70);
        }
        else
        {
            tmp->left = addNode(tmp->left, value);
        }
    }
    return tmp;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);
    }
}

void search(struct node *root, int key)
{
    // found
    // not found
}

struct node *inOrderSuccessor(struct node *root)
{
    if (root != NULL)
    {
        inOrderSuccessor(root->left);
    }
    return root;
}

struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
    {
        printf("\nNot Found");
    }
    else if (root->data == key)
    {
        printf("\nFound");
        // delete
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            printf("\n 0 child");
            free(root);
            return NULL;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            printf("\n 1 child -> right ");
            struct node *tmp = root->right;
            free(root);
            return tmp;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            printf("\n 1 child -> left ");
            struct node *tmp = root->left;
            free(root);
            return tmp;
        }
        else
        {
            printf("\n 2 child");
            struct node *smallest = inOrderSuccessor(root->right);
            printf("\n smallest => %d ", smallest->data); //
            root->data = smallest->data;
            root->right = deleteNode(root->right, smallest->data); // 28
            return root;
        }
    }
    else if (key < root->data)
    {
        // left
        root->left = deleteNode(root->left, key);
    }
    else
    {
        root->right = deleteNode(root->right, key);
    }

    return root;
}

int main()
{

    root = addNode(root, 50); // NULL,50
    addNode(root, 60);        // 50 , 60
    addNode(root, 70);
    addNode(root, 40);
    addNode(root, 30);
    addNode(root, 45);
    // addNode(root, 55);

    // printf("\n%d ", root->left->left->data);   // 30
    // printf("\n%d ", root->left->data);         // 40
    // printf("\n%d ", root->data);               // 50
    // printf("\n%d ", root->right->data);        // 60
    // printf("\n%d ", root->right->right->data); // 70

    // inOrder   left root right
    // preOreder root left right
    // postOrder left right root

    printf("\nAll data => ");
    inOrder(root);
    // preOrder(root);
    // postOrder(root);
    // root = deleteNode(root, 30);
    root = deleteNode(root, 50);
    // root = deleteNode(root, 50);
    printf("\nafter removed 50 All data => \n");
    inOrder(root);

    return 0;
}