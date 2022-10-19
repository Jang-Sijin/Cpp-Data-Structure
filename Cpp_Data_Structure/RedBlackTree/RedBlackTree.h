#pragma once

namespace RedBlackTree
{
	enum class Color
	{
		RED,
		BLACK
	};

	struct Node
	{
		Node* parent;		// �θ� ���, ����� ��� Ʈ���� ��Ʈ
		Node* leftNode;		// ���� �ڽ� ���, ����� ��� ���� ���� ����
		Node* rightNode;	// ������ �ڽ� ���, ����� ��� ���� ū ����
		bool color;				// 1. ����� ������ ���� �Ǵ� ��, 2. ��Ʈ ���� ��, 3. ��� ���� ����(nil)�� ��, 4. ���� ����� �ڽĳ�� ������ ������ ��� ��
		bool isNil;				// ��� �Ǵ� nil(��) ����� ��쿡�� true
		int key;				// ����� ��, ����� ��� ������� ����
	};

	class RedBlackTree
	{
	public:
		bool IsEmpty() const;
	private:
		Node* root;
	};
}
