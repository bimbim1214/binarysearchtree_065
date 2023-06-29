#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	//membuat kondtruktor untuk node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree 
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL; //membuat ROOT menjadi NULL
	}

	void insert(string element) // insert a node in the binary tree
	{
		Node* newNode = new Node(element, NULL, NULL); //allocate memory the new Node
		newNode->info = element; //assign value to the data field of the new Node
		newNode->leftchild = NULL; //make the left child of the new node point to NULL
		newNode->rightchild = NULL; //make the right child of the new node point to NULL

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode); //locate the node which will be the parent of the node to be inserted

		if (parent == NULL) //if the parent is NULL (Tree is empty)
		{
			ROOT = newNode; // mark the new node as ROOT
			return; //exit
		}

		if (element < parent->info) //if the value in the data field of the new node is less than that of the parent 
		{
			parent->leftchild = newNode; //make the left child of the parent point to the new node
		}
		else if (element > parent->info) // if the value in the data field of the new node is greater than that of the parent
		{
			parent->rightchild = newNode; // make the right child of the parent pointto thenew node
		}
	}

	void search(string element, Node*& parent, Node*& currentNode)
	{
		//this function searches the cuurentNode of the specified Node current Node of its parent
		currentNode = ROOT;
		parent = NULL;
		while ((currentNode != NULL) && (currentNode->info != element))
		{
			parent = currentNode;
			if (element < currentNode->info)
				currentNode = currentNode->leftchild;
			else
				currentNode = currentNode->rightchild;
		}
	}

	void inorder(Node* ptr)
	{}
};