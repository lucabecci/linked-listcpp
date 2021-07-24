#include<iostream>

class Node {
    public:
        int data;
        Node* next;
};

void insertAfterNode(Node* prev_node, int new_data){
    if(prev_node == NULL){
        std::cout << "El nodo previo es nulo" << std::endl;
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void printLinkedList(Node* n){
    while (n != NULL)
    {
        std::cout << n->data << std::endl;
        n = n->next;
    };
};

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

    /*linked list now -> [1,2,3]*/

    insertAfterNode(second, 7);
    printLinkedList(head);
    return 0;
}