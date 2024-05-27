#pragma once

// Node definition 
struct Node{
	int data;
	Node* next;

	// default constructor
	Node() {
		data = 0;
		next = nullptr;
	}

	// parameterized constructor
	Node(const int&val) {
		data = val;
		next = nullptr;
	}
};


