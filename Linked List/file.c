#include <stdio.h>
#include <stdlib.h>

typedef struct node
{

    int data;
    struct node *next;
};

int main(void)
{

    struct node *start;

    start = (struct node *)malloc(sizeof(struct node));

    //creating the nodes of the linked list

    struct node *nodevalue1;
    nodevalue1 = (struct node *)malloc(sizeof(struct node));

    struct node *nodevalue2;
    nodevalue2 = (struct node *)malloc(sizeof(struct node));

    struct node *nodevalue3;
    nodevalue3 = (struct node *)malloc(sizeof(struct node));

    struct node *nodevalue4;
    nodevalue4 = (struct node *)malloc(sizeof(struct node));

    //giving values for the nodes
    nodevalue1->data = 20;
    nodevalue2->data = 40;
    nodevalue3->data = 50;
    nodevalue4->data = 70;

    //connecting the nodes

    nodevalue1->next = nodevalue2;
    nodevalue2->next = nodevalue3;
    nodevalue3->next = nodevalue4;
    nodevalue4->next = NULL;

    //printing the nodes

    printf("[%d %d] -> [%d %d] -> [%d %d] -> [%d NULL]", nodevalue1->data, nodevalue1->next, nodevalue2->data,
           nodevalue2->next, nodevalue3->data, nodevalue3->next, nodevalue4->data);
}
