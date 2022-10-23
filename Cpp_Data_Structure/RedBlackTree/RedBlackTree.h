#pragma once

namespace RedBlackTree
{
	enum class NodeColor
	{
		RED,
		BLACK
	};

	typedef Node* Nodeptr;

	class Node
	{
	public:
		Node();
	public:
		Nodeptr BuyHeadNode();
		Nodeptr BuyNode();
	private:
		Node* parent;		// 부모 노드, 헤드인 경우 트리의 루트
		Node* leftNode;		// 왼쪽 자식 노드, 헤드인 경우 가장 작은 원소
		Node* rightNode;	// 오른쪽 자식 노드, 헤드인 경우 가장 큰 원소
		bool color;			// 1. 노드의 색상은 레드 또는 블랙, 2. 루트 노드는 블랙, 3. 모든 리프 노드들(nil)은 블랙, 4. 레드 노드의 자식노드 양쪽은 언제나 모두 블랙
		bool isNil;			// 헤드 또는 nil(빈) 노드인 경우에만 true
		int key;			// 저장된 값, 헤드인 경우 사용하지 않음
	};

	class RedBlackTree
	{
	public:
		RedBlackTree();
	public:
		bool IsEmpty() const;
		Node& Insert(int value);
	private:
		Nodeptr head;
		unsigned int size;
	};
}
