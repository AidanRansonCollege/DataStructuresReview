#include "LinkedList.h"

int main() {

	LinkedList list;

	int count;
	int input;

	cout << "How many nums?" << endl;
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "Enter the number" << endl;
		cin >> input; 
		list.Insert(input);
		list.Print();
	}

	cout << "\nWere going to insert one more node, what is its value?" << endl;
	cin >> input;
	cout << "Where is it going? (starting at pos 0)" << endl;
	int input2;
	cin >> input2;
	list.Insert(input, input2);
	list.Print();

	cout << "Remove a node, type which position you want removed (starting at 0)" << endl;
	cin >> input;
	list.Remove(input);
	list.Print();

	cout << "Were now going to reverse the list, look at this" << endl;
	cout << "Old list:" << endl;
	list.Print();
	cout << "New List:" << endl;
	list.ReverseIterative();
	list.Print();

	return 0;
}

