#include "RedBlackTree.h"

namespace RedBlackTree
{
	// [Node Class - StartLine]
	Node::Node()
	{
	}

	Nodeptr Node::BuyHeadNode()
	{
		Nodeptr headNode = new Node;

		headNode->Color = 1;
	}

	Nodeptr Node::BuyNode()
	{

	}

	// [RedBlackTree Class - StartLine]
	RedBlackTree::RedBlackTree()
		: head{ nullptr }
		, size{ 0 }		
	{
	}

	Node& RedBlackTree::Insert(int value)
	{
		if (this->head == nullptr)
		{
			head = new int{ value };
		}
	}
}