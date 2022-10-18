#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> test;

	for (int i = 0; i < 10; ++i)
	{
		test.insert(i + 1);
	}

	for (const auto& iter : test)
	{
		cout << iter << endl;
	}
}