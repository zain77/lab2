#include <iostream>
using namespace std;

 //Node class
class Node {
public:
	int data;
	Node* next;


	Node() {};
	void SetData(int aData) { data = aData; };
	void SetNext(Node* aNext) { next = aNext; };
	int Data() { return data; };
	Node* Next() { return next; };};

 //Stack class
class Stack {
public:
	Node *top;
	Stack() { top = NULL; };
	void Print();
	void Push(int dat);
	int Pop();
	int Peek();

	bool IsEmpty() { 
		if (top == NULL);
	cout << "The stack list is empty" << endl;
	};
};


 //Print the contents of the stack

void Stack::Print() {

	 //Temp pointer
	Node *tmp = top;

	// No nodes
	if (tmp == NULL) {
		cout << "EMPTY" << endl;
		return;
	}

	// One node in the list
	if (tmp->Next() == NULL) {
		cout << tmp->Data();
		cout << " --> ";
		cout << "NULL" << endl;
	}
	else {
		// Parse and print the list
		do {
			cout << tmp->Data();
			cout << " --> ";
			tmp = tmp->Next();
		} while (tmp != NULL);

		cout << "NULL" << endl;
	}
}


// Push a node to the stack

void Stack::Push(int dat) {
	Node *temp = new Node;
	temp->data = dat;
	temp->next = top;
	top = temp; // making top point to the new node 
}


// Pop a node from the stack

int Stack::Pop() {
	Node *temp;
	temp = top;
	top = top->next;
	int a = temp->data;
	delete temp; // deleting the node a top
	return a;
}


// Peek at the top of the stack

int Stack::Peek() {
	Node *temp;
	temp = top;
	int a = temp->data;
	return a; // return data value of the node that is at the top
}

void main()
{
	// New list
	Stack stack;

	// Append nodes to the list
	stack.Push(100); stack.Print();
	stack.Push(200); stack.Print();
	stack.Push(300); stack.Print();
	stack.Push(400); stack.Print();
	stack.Push(500); stack.Print();

	// Delete nodes from the list
	int x;
	x = stack.Pop(); stack.Print();
	x = stack.Pop(); stack.Print();
	x = stack.Pop(); stack.Print();
	x = stack.Pop(); stack.Print();
	x = stack.Pop(); stack.Print();
	system("PAUSE");
}



