 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 #include<stdlib.h>

// int main()
// {
//     int i,j,e;
//     char o[10],a[10];
//     printf("Enter equation :\n");
//     gets(o);
//     e = strlen(o);
//     strrev(o);
//     //for ( i = e-1,j = 0;i >= 0; i--,j++)
//     //{
//     //    a[j] = o[i];
//     //}
//     //a[j] = '\0';
//     printf("%s",o);
//     return 0;
// }

// int main() {
//     int k,n,i;
//     printf("Enter no. of row : ");
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         for ( k = i; k <= (n+1); k++)
//         {
//             printf("  ");
//         }

//         for ( k = 1; k <= i; k++)
//         {
//             printf(" %d  ",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }








// #include <stdio.h>
// #include <stdlib.h>

// // Structure for a tree node
// struct Node {
//     int key;
//     struct Node *left;
//     struct Node *right;
//     int height;
// };

// // Function to get the height of a node
// int height(struct Node *node) {
//     if (node == NULL)
//         return 0;
//     return node->height;
// }

// // Function to get the maximum of two integers
// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

// // Function to create a new node with a given key
// struct Node *newNode(int key) {
//     struct Node *node = (struct Node *)malloc(sizeof(struct Node));
//     node->key = key;
//     node->left = NULL;
//     node->right = NULL;
//     node->height = 1; // New node is initially at height 1
//     return node;
// }

// // Function to perform a right rotation
// struct Node *rightRotate(struct Node *y) {
//     struct Node *x = y->left;
//     struct Node *T2 = x->right;

//     // Perform rotation
//     x->right = y;
//     y->left = T2;

//     // Update heights
//     y->height = max(height(y->left), height(y->right)) + 1;
//     x->height = max(height(x->left), height(x->right)) + 1;

//     // Return new root
//     return x;
// }

// // Function to perform a left rotation
// struct Node *leftRotate(struct Node *x) {
//     struct Node *y = x->right;
//     struct Node *T2 = y->left;

//     // Perform rotation
//     y->left = x;
//     x->right = T2;

//     // Update heights
//     x->height = max(height(x->left), height(x->right)) + 1;
//     y->height = max(height(y->left), height(y->right)) + 1;

//     // Return new root
//     return y;
// }

// // Get the balance factor of a node
// int getBalance(struct Node *node) {
//     if (node == NULL)
//         return 0;
//     return height(node->left) - height(node->right);
// }

// // Function to insert a key into the AVL tree
// struct Node *insert(struct Node *node, int key) {
//     // Perform standard BST insertion
//     if (node == NULL)
//         return newNode(key);

//     if (key < node->key)
//         node->left = insert(node->left, key);
//     else if (key > node->key)
//         node->right = insert(node->right, key);
//     else // Duplicate keys not allowed
//         return node;

//     // Update height of current node
//     node->height = 1 + max(height(node->left), height(node->right));

//     // Get the balance factor to check if the node became unbalanced
//     int balance = getBalance(node);

//     // Left Left Case
//     if (balance > 1 && key < node->left->key)
//         return rightRotate(node);

//     // Right Right Case
//     if (balance < -1 && key > node->right->key)
//         return leftRotate(node);

//     // Left Right Case
//     if (balance > 1 && key > node->left->key) {
//         node->left = leftRotate(node->left);
//         return rightRotate(node);
//     }

//     // Right Left Case
//     if (balance < -1 && key < node->right->key) {
//         node->right = rightRotate(node->right);
//         return leftRotate(node);
//     }

//     // Return the unchanged node pointer
//     return node;
// }

// // Function to print the inorder traversal of the tree
// void inorder(struct Node *root) {
//     if (root != NULL) {
//         inorder(root->left);
//         printf("%d ", root->key);
//         inorder(root->right);
//     }
// }

// // Driver program
// int main() {
//     struct Node *root = NULL;

//     // Example usage
//     root = insert(root, 10);
//     root = insert(root, 20);
//     root = insert(root, 30);
//     root = insert(root, 40);
//     root = insert(root, 50);
//     root = insert(root, 25);

//     // Print the inorder traversal of the AVL tree
//     printf("Inorder traversal of the AVL tree: ");
//     inorder(root);

//     return 0;
// }

int main ()
{
    int a[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",&a[i]);
    }
    return 0;
}