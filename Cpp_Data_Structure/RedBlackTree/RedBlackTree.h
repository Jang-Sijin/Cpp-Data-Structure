#pragma once

namespace RedBlackTree
{
	enum Color
	{
		RED,
		BLACK
	};

	struct TreeNode
	{
		TreeNode* parent;		// �θ� ���, ����� ��� Ʈ���� ��Ʈ
		TreeNode* leftNode;		// ���� �ڽ� ���, ����� ��� ���� ���� ����
		TreeNode* rightNode;	// ������ �ڽ� ���, ����� ��� ���� ū ����
		bool color;				// 1. ����� ������ ���� �Ǵ� ��, 2. ��Ʈ ���� ��, 3. ��� ���� ����(nil)�� ��, 4. ���� ����� �ڽĳ�� ������ ������ ��� ��
		bool isNil;				// ��� �Ǵ� nil(��) ����� ��쿡�� true
		int value;				// ����� ��, ����� ��� ������� ����
	};

	class RedBlackTree
	{

	};
}
