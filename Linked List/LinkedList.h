#pragma once
#include "Node.h"
#include <iostream>
using namespace std;


class LinkedList
{
private:
	Node* head;

public:
	LinkedList();
	void Insert(int);
	void Insert(int, int);
	void Print();
	void Remove(int);
	void ReverseIterative();
};

