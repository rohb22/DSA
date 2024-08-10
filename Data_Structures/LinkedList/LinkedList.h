#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>


struct Node {
        int value;
        Node* next = nullptr;
};

class LinkedList{

    // Parent node
    Node* head;

    public:
        // Initialize head as null
        LinkedList();

        // Constructor
        LinkedList(int val);

        // create a node to prevent redundancy
        Node* createNode(int val, Node* nxt = nullptr);


        // Traverse until the end of the list and insert
        void insertEnd(int val);

        // Change the head to insert at the beginning
        void insertStart(int val);

        // Insert a node in a specific position, insert at end if outside the list length
        void insertAt(int val, int pos);

        void deleteValue(int val);

        int length();

        // Display all the nodes values in sequential order
        void display();


        // Destructor to prevent memory leaks
        ~LinkedList();
};

#endif