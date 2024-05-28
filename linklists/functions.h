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
