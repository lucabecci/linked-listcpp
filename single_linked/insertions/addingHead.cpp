#include<iostream>

class Node {
    public:
        int data;
        Node* next;
};

void printLinkedList(Node* n){
    while (n != NULL)
    {
        std::cout << n->data << std::endl;
        n = n->next;
    };
};

void pushLinkedList(Node** head, int new_data)
{
    Node* new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head);

    (*head) = new_node;
}

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* three = NULL; 

    head = new Node();
    second = new Node();
    three = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = three;

    three->data = 3;
    three->next = NULL;

    printLinkedList(head);
    pushLinkedList(&head, 33);
    printLinkedList(head);
    return 0;
}