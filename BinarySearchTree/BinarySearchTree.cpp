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

	}
};