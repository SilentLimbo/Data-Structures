/*
	Ghaly, Mina

	September 16, 2020

	CS A200
	Lab 2
*/

#include "BST.h"

using namespace std;

// Definition function insert (non-recursive) 
void BST::insert(int insertItem)
{
	// Makes new node with inserted data
	Node* newNode = new Node;
	newNode->data = insertItem;
 
	// Makes temporary nodes to traverse the BST.
	Node* traversing = root;
	Node* trailing = nullptr;

	// If the root exists move traversing into the location of where we want to
	// make the new node, while trailing follows traversing.
	while (traversing != nullptr)
	{
		trailing = traversing;
		if (insertItem == traversing->data)
			traversing = nullptr;
		else if (insertItem < traversing->data)
			traversing = traversing->llink;
		else
			traversing = traversing->rlink;
	}

	if (trailing == nullptr)
		root = newNode;
	else if (insertItem == trailing->data)
		cerr << "The item to insert is already in the list" 
		     << " - duplicates are not allowed." << endl;
	else if (insertItem < trailing->data)
		trailing->llink = newNode;
	else 
		trailing->rlink = newNode;
}

// Definition function totalNodes
int BST::totalNodes() const
{
	if (root == nullptr)
		return 0;
	else
		return totalNodes(root);
}

// Definition function totalNodes (recursive)
int BST::totalNodes(const Node* p) const
{
	if (p != nullptr)
		return 1 + totalNodes(p->llink) + totalNodes(p->rlink);
	else
		return 0;
}

// Definition overloaded function preorderTraversal
void BST::preorderTraversal() const
{
	if (root == nullptr)
		cerr << "There is no tree.";
	else
	{
		preorderTraversal(root);
	}
}

// Definition overloaded function preorderTraversal (recursive)
void BST::preorderTraversal(const Node* p) const
{
	if (p != nullptr)
	{
		cout << p->data << " ";
		preorderTraversal(p->llink);
		preorderTraversal(p->rlink);
	}
}

// Definition overloaded function postorderTraversal
void BST::postorderTraversal() const
{
	if (root == nullptr)
		cerr << "There is no tree.";
	else
	{
		postorderTraversal(root);
	}
}

// Definition overloaded function postorderTraversal (recursive)
void BST::postorderTraversal(const Node* p) const
{
	if (p != nullptr)
	{
		postorderTraversal(p->llink);
		postorderTraversal(p->rlink);
		cout << p->data << " ";
	}
}