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

int main() {
    //inicializando tres variables para mi linked list
    Node* head = NULL;
    Node* second = NULL;
    Node* three = NULL; 

    //inicializando tres nodos para la linked list
    head = new Node();
    second = new Node();
    three = new Node();

    //asignando valores de data = value y next = siguiente nodo == second node para procesamiento de head linked list
    head->data = 1;
    head->next = second;
    /*
      head         second         third
        |             |             |
        |             |             |
    +---+---+     +----+----+     +-----+----+
    | 1 | o----->| # | # |     | # | # |
    +---+---+     +----+----+     +-----+----+    
    */
   //repitiendo lo del paso anterior para el segundo nodo
   second->data = 2;
   second->next = three;

   /*
    head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1 | o----->| 2 | o-----> | # | # |
    +---+---+     +---+---+     +----+----+    
     */
    //repitiendo lo del paso anterior para el tercer nodo
    three->data = 3;
    three->next = NULL; //no hay nodo siguiente y por eso es null
    /*
    head    
        |
        |
    +---+---+     +---+---+     +----+------+
    | 1 | o----->| 2 | o-----> | 3 | NULL |
    +---+---+     +---+---+     +----+------+    
    */
    printLinkedList(head);
    return 0;
}