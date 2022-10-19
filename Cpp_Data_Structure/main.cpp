#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> test;

	for (int i = 10; i > 0; --i)
	{
		test.insert(i);
	}

	for (const auto& iter : test)
	{
		cout << iter << endl;
	}
}