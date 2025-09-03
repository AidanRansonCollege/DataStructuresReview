#include "LinkedList.h"

LinkedList::LinkedList() {
	this->head = nullptr;
}


void LinkedList::Insert(int data) {
	Node* temp = new Node;
	temp->m_data = data;
	temp->next = this->head;
	this->head = temp;
}

void LinkedList::Insert(int data, int position) {
	
	Node* temp1 = new Node;
	temp1->m_data = data;
	temp1->next = nullptr;

	//Special Case just Insert(data)
	if (position == 0) {
		temp1->next = this->head;
		this->head = temp1;
		return;
	}

	//Go to n-1 Node
	Node* temp2 = this->head;
	for (int i = 0; i < position - 1; i++) {
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;

}

void LinkedList::Print() {
	Node* temp = head;

	cout << "List is ";

	while (temp != NULL) {
		cout << temp->m_data << " ";
		temp = temp->next;
	}
	cout << endl;
}

void LinkedList::Remove(int position) {

	Node* temp1 = head;

	if (position == 0) {
		head = temp1->next;
		delete temp1;
		return;
	}

	for (int i = 0; i < position - 1; i++) {
		temp1 = temp1->next;
	}
	Node* temp2 = temp1->next;
	temp1->next = temp1->next->next;
	delete temp2;
}

void LinkedList::ReverseIterative() {
	Node* current, *prev, *next;
	
	current = head;
	prev = nullptr;

	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	head = prev;

}