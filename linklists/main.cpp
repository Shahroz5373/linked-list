#include<iostream>
using namespace std;
#include"functions.h" // file containing functions
#include"Node.h" // file containing Node 


int main() {
	Node* head=new Node(5); // making head of list 
	Node* current = head;
	// making the list 
	addNode(2, current);
	addNode(8, current);
	addNode(1, current);
	addNode(9, current);
	
	cout << "The linked list is " << endl;
	printList(head); //prints the list
	
	return 0;
}

