#include <bits/stdc++.h> 
using namespace std; 


template<typename T> 
class SinglyLinkedList {
private:
    struct Node {
        T data;
        Node* next;
    };

    struct Node* head;
    struct Node* tail;
    int size;

public:
    // default constructor
    SinglyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    // parameterized constructor: initialize the SLL with a size
    SinglyLinkedList(int initialSize) {
        head = nullptr;
        tail = nullptr;

        for (int i = 0; i < initialSize; i++) {
            push_back(T{});
        }

        size = initialSize;
    }

    // return the size of SLL (# of nodes)
    int size () { return size; }
};