/*
 Linked List Reverse Printing Challenge
 
 Using whatever programming techniques you know, write the cleanest possible function you can think of to print a singly linked list in reverse. The format for the node should be a struct containing an integer value, val, and a next pointer to the following node.
 */


#include <iostream>
using namespace std;

struct node {
    int val;
    node *next;
};

void Print_Reverse( node *list ) {
    if( list != 0 ) {
        Print_Reverse( list->next );
        cout << list->val << endl;
    }
}


int main() {


    node root;
    node a1;
    node a2;
    node a3;
    
    node *ptr1 = &root;
//    node *ptr2 = &a1;
    
    root.val = 10;
    a1.val = 11;
    a2.val = 12;
    a3.val = 13;
    
    root.next = &a1;
    a1.next = &a2;
    a2.next = &a3;
    a3.next = nullptr;
    
    Print_Reverse(ptr1);
    
    return 0;
}

