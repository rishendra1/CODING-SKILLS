#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

void insertBegin(int x) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = x;
    n->prev = NULL;
    n->next = head;
    if (head != NULL) head->prev = n;
    head = n;
}

void insertEnd(int x) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = x;
    n->next = NULL;
    if (head == NULL) {
        n->prev = NULL;
        head = n;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = n;
    n->prev = temp;
}

void deleteBegin() {
    if (head == NULL) return;
    struct Node* temp = head;
    head = head->next;
    if (head != NULL) head->prev = NULL;
    free(temp);
}

void deleteEnd() {
    if (head == NULL) return;
    struct Node* temp = head;
    if (temp->next == NULL) {
        head = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL) temp = temp->next;
    temp->prev->next = NULL;
    free(temp);
}

void displayForward() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void displayBackward() {
    struct Node* temp = head;
    if (temp == NULL) return;
    while (temp->next != NULL) temp = temp->next;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main() {
    insertBegin(20);
    insertBegin(10);
    insertEnd(30);
    insertEnd(40);
    displayForward();
    displayBackward();
    deleteBegin();
    displayForward();
    deleteEnd();
    displayForward();
    return 0;
}
