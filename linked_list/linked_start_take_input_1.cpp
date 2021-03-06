#include<bits/stdc++.h>

class Node {
	public:
		int data;
		Node *next;

		Node(int val) {
			this->data = val;
			next = NULL;
		}
};


Node *takeInput() {

	int data;
	std::cin >> data;

	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		std::cin >> data;
	}
	return head;
}


void printLL(Node *head) {
	Node *tmp = head;
	while(tmp != NULL) {
		std::cout << tmp->data << "-->";
		tmp = tmp->next;
	}
	std::cout << "NULL\n";
}

int main() {
	
	Node *head = takeInput();
	printLL(head);
	return 0;
}