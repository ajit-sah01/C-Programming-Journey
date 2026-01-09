#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insert(int value) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void delete() {
    if (head == NULL)
        printf("List is empty\n");
    else {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

void display() {
    struct Node* temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();
    delete();
    display();
    return 0;
}
