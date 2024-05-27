#pragma once
#include<iostream>
using namespace std;
#include"Node.h"


//function to add nodes
void addNode(const int& val, Node *& current) {
	
	Node* temp = new Node(val);
	current->next = temp;
	current = temp;
}

// function to print list
void printList(Node *& head) {
	Node* current = head;
	cout << "The Linked list is " << endl;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;

}

// function to sort list 
void sortList(Node*& head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* current;
    bool swapped;
    do {
        swapped = false;
        current = head;
        while (current->next != nullptr) {
            if (current->data > current->next->data) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}


void swap(int& a,int &b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

