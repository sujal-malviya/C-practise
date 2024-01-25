#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                    // Data of the node
    struct node *nextptr;       // Address of the node
}*stnode;                       // Pointer to the starting node

// Function prototypes
void createNodeList(int n);     // Function to create the linked list
void FirstNodeDeletion();	    // Function to delete the first node
void displayList();             // Function to display the linked list

// Main function
int main()
{
    int n, num, pos;
	
    printf("\n\n Linked List : Delete first node of Singly Linked List :\n");
    printf("------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);

    printf("\n Data entered in the list are : \n");		
    displayList();

    FirstNodeDeletion();
    printf("\n Data, after deletion of first node : \n");		
    displayList();

    return 0;
}

// Function to create a linked list with n nodes
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)  // Check whether stnode is NULL for memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode-> num = num;      
        stnode-> nextptr = NULL; // Links the address field to NULL
        tmp = stnode;

        for(i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));

            if(fnNode == NULL)  // Check whether fnNode is NULL for memory allocation
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;      // Links the num field of fnNode with num
                fnNode->nextptr = NULL; // Links the address field of fnNode with NULL
                tmp->nextptr = fnNode;  // Links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr;
            }
        }
    }
} 

// Function to delete the first node of the list
void FirstNodeDeletion()
{
    struct node *toDelptr;

    if(stnode == NULL)
    {
        printf(" There are no nodes in the list.");
    }
    else
    {
        toDelptr = stnode;
        stnode = stnode->nextptr;
        printf("\n Data of node 1 which is being deleted is :  %d\n", toDelptr->num);
        free(toDelptr);  // Clears the memory occupied by the first node
    }
}

// Function to display the linked list
void displayList()
{
    struct node *tmp;

    if(stnode == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);   // Prints the data of the current node
            tmp = tmp->nextptr;                 // Advances the position of the current node
        }
    }
}
