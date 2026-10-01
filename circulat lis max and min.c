#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode, *temp;
    int i, n;
    int max, min;

    head = NULL;

    printf("enter the number of nodes: ");
    scanf("%d", &n);

    

    for(i = 1; i <= n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
       
        
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    temp->next = head;

    printf("Circular linked list: ");
    temp = head;
    max = head->data;
    min = head->data;

    do {
        printf("%d -> ", temp->data);
        if (temp->data > max) {
            max = temp->data;
        }
        if (temp->data < min) {
            min = temp->data;
        }
        temp = temp->next;
    } while(temp != head);

    printf("back to head\n");
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);


    return 0;
}

