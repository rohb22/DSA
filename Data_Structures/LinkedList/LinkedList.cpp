#include "LinkedList.h"

// Initialize head as null
LinkedList::LinkedList() : head(nullptr) {};

// Constructor
LinkedList::LinkedList(int val) {
    head = new Node();
    head->value = val;
};

// create a node to prevent redundancy
Node* LinkedList::createNode(int val, Node* nxt = nullptr) {
    Node* node = new Node();
    node->value = val;
    node->next = nxt;
    return node;
}


// Traverse until the end of the list and insert
void LinkedList::insertEnd(int val){
    Node* node = createNode(val);
    // Node to traverse
    Node* tmp = head;
    while(tmp){
        if(tmp->next == nullptr){
            tmp->next = node;
            return;
        }
        tmp = tmp->next;
    }
}

// Change the head to insert at the beginning
void LinkedList::insertStart(int val){
    Node* node = createNode(val, head);
    head = node;
}

// Insert a node in a specific position, insert at end if outside the list length
void LinkedList::insertAt(int val, int pos) {

    // Insert at the start
    if(pos == 0){
        insertStart(val);
        return;
    }

    Node* node = createNode(val);
    Node* tmp = head;
    for (int i = 0; i < pos; i++)
    {
        // If there's no next node append to the end
        if(tmp->next == nullptr){
            tmp->next = node;
            return;
        }
        
        // Traverse to the node before the position set its next to the new node
        if(i == pos - 1) {
            node->next = tmp->next;
            tmp->next = node;
            return;
        }
        tmp = tmp->next;
    }
    
}

void LinkedList::deleteValue(int val){
    Node* tmp = head;

    //if the value is on the head
    if(tmp->value == val) {
        head = tmp->next;
        delete tmp;
        return;
    }
    

    // Traverse the link list
    while(tmp){

        // If the value is found delete the node
        if(tmp->next->value == val){
            Node* trash = tmp->next;
            tmp->next = trash->next;
            delete trash;
            return;
        }
        tmp = tmp->next;
    }
}

int LinkedList::length(){
    Node* tmp = head;
    int count = 0;
    while(tmp){
        count++;
        tmp = tmp->next;
    }
    return count;
}

// Display all the nodes values in sequential order
void LinkedList::display(){
    Node* tmp = head;
    while (tmp)
    {
        std::cout << tmp->value << "->";
        tmp = tmp->next;
    }
}


// Destructor to prevent memory leaks
LinkedList::~LinkedList() {
    Node* tmp = head;
    while(tmp){
        Node* next = tmp->next;
        delete tmp;
        tmp = next;
    }
}

