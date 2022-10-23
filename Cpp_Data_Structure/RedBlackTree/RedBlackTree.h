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
		Node* parent;		// �θ� ���, ����� ��� Ʈ���� ��Ʈ
		Node* leftNode;		// ���� �ڽ� ���, ����� ��� ���� ���� ����
		Node* rightNode;	// ������ �ڽ� ���, ����� ��� ���� ū ����
		bool color;			// 1. ����� ������ ���� �Ǵ� ��, 2. ��Ʈ ���� ��, 3. ��� ���� ����(nil)�� ��, 4. ���� ����� �ڽĳ�� ������ ������ ��� ��
		bool isNil;			// ��� �Ǵ� nil(��) ����� ��쿡�� true
		int key;			// ����� ��, ����� ��� ������� ����
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
